//******************************************************************************
// Programa: Competencia de autos
// Autor: Franco Ibañez
// Fecha: 29/05/2023

//******************************************************************************
#include <stdio.h>
#include <math.h>

// Declaración de subprogramas
// Funciones
int TiempoEnSeg(int VH, int VM, int VS);

int AJUSTE(int DVG1, int DDIF1, int DVG2, int DDIF2, int DVG3,
           int DDIF3, int CORR, int TsegCorr);

// Procedimientos
void TiempoEnHMS(int DATO, int *REF_H, int *REF_M, int *REF_S);

void PruebaCla(int *REF_NG, int *REF_Tseg);

void EtapaFinal(int VG1, int DIF1, int VG2, int DIF2, int VG3, int DIF3);

// Programa principal
int main()
{
    // Variables globales
    int NG1, NG2, NG3;
    int DIFSEG1, DIFSEG2, DIFSEG3;

    // Hacer
    PruebaCla(&NG1, &DIFSEG1);
    PruebaCla(&NG2, &DIFSEG2);
    PruebaCla(&NG3, &DIFSEG3);
    EtapaFinal(NG1, DIFSEG1, NG2, DIFSEG2, NG3, DIFSEG3);
    // Fin Hacer

    return 0;
}

// Implementación de subprogramas
// Procedimientos
void PruebaCla(int *REF_NG, int *REF_Tseg)
{
    int THcor, TMcor, TScor; // Tiempo utilizado por el corredor
    int GIROS;               // Cantidad de giros
    int CANTcor;             // Cantidad de corredores
    int NROcor;              // Número de identificación del corredor
    int INDcor;              // Índice del Rep. PARA por corredor
    int MINGIROS;            // Número mínimo de giros para contar
    int SELEC = 0;           // Contador para el porcentaje
    int TPRIMERO, TSEGUNDO;  // Tiempos en segundos del ganador y del segundo en llegar
    float PORCGIROS;

    printf("Ingrese la cantidad de corredores: ");
    scanf("%d", &CANTcor);

    for (INDcor = 1; INDcor <= CANTcor; INDcor++)
    {
        printf("Ingrese el número de corredor, cantidad de giros, horas, minutos y segundos: ");
        scanf("%d %d %d %d %d", &NROcor, &GIROS, &THcor, &TMcor, &TScor);

        if (INDcor == 1) // Es el primer corredor
        {
            TPRIMERO = TiempoEnSeg(THcor, TMcor, TScor);
            *REF_NG = NROcor;
            MINGIROS = GIROS - 2;
        }
        else if (INDcor == 2) // Es el segundo corredor
        {
            if (THcor + TMcor + TScor > 0)
            {
                TSEGUNDO = TiempoEnSeg(THcor, TMcor, TScor);
                *REF_Tseg = TSEGUNDO - TPRIMERO;
            }
            else
            {
                *REF_Tseg = 0;
            }
        }

        if (THcor + TMcor + TScor > 0 && GIROS >= MINGIROS)
        {
            SELEC++;
        }
    }
    PORCGIROS = (float)SELEC * 100 / CANTcor;

    printf("Ganó el corredor: %d, utilizando un tiempo de: %d segundos y con una diferencia sobre el segundo clasificado de %d segundos\n", *REF_NG, TPRIMERO, *REF_Tseg);
    printf("El porcentaje de corredores que finalizaron la prueba dentro de los dos giros: %.2f\n", PORCGIROS);
}

void EtapaFinal(int VG1, int DIF1, int VG2, int DIF2, int VG3, int DIF3)
{
    int THcor, TMcor, TScor, GIROS, CANTcor, NROcor, INDcor;
    int SELEC = 0;
    int COR1, COR2, COR3, GANA, GIROSGANA, GIROS1, GIROS2, GIROS3;
    int SEG1, SEG2, SEG3, SEGGANA;

    printf("Ingrese la cantidad de corredores: ");
    scanf("%d", &CANTcor);

    for (INDcor = 1; INDcor <= CANTcor; INDcor++)
    {
        printf("Ingrese el número de corredor, cantidad de giros, horas, minutos y segundos: ");
        scanf("%d %d %d %d %d", &NROcor, &GIROS, &THcor, &TMcor, &TScor);

        if (INDcor <= 3)
        {
            switch (INDcor)
            {
            case 1: // Primer lugar en la etapa final
                COR1 = NROcor;
                GIROS1 = GIROS;
                SEG1 = TiempoEnSeg(THcor, TMcor, TScor);
                SEG1 = AJUSTE(VG1, DIF1, VG2, DIF2, VG3, DIF3, COR1, SEG1);
                break;
            case 2:
                COR2 = NROcor;
                GIROS2 = GIROS;
                SEG2 = TiempoEnSeg(THcor, TMcor, TScor);
                SEG2 = AJUSTE(VG1, DIF1, DIF2, VG3, DIF3, COR2, SEG2);
                break;
            case 3:
                COR3 = NROcor;
                GIROS3 = GIROS;
                SEG3 = TiempoEnSeg(THcor, TMcor, TScor);
                SEG3 = AJUSTE(VG1, DIF1, DIF2, VG3, DIF3, COR3, SEG3);
                break;
            }
        }

        if (THcor + TMcor + TScor > 0)
        {
            SELEC++;
        }
    }

    GANA = COR1;
    SEGGANA = GIROS1;

    if (SEG2 < SEGGANA)
    {
        if (SEG2 < SEG3)
        {
            GANA = COR2;
            GIROSGANA = GIROS2;
            SEGGANA = SEG2;
        }
        else
        {
            GANA = COR3;
            GIROSGANA = GIROS3;
            SEGGANA = SEG3;
        }
    }

    int horasGana, minutosGana, segundosGana;
    TiempoEnHMS(SEGGANA, &horasGana, &minutosGana, &segundosGana);

    printf("El ganador de la etapa final es el corredor: %d\n", GANA);
    printf("El tiempo total de la etapa final es de: %d horas, %d minutos y %d segundos\n", horasGana, minutosGana, segundosGana);
    printf("El corredor ganador dio %d giros en total\n", GIROSGANA);
}

// Funciones
int TiempoEnSeg(int VH, int VM, int VS)
{
    return VH * 3600 + VM * 60 + VS;
}

int AJUSTE(int DVG1, int DDIF1, int DVG2, int DDIF2, int DVG3, int DDIF3, int CORR, int TsegCorr)
{
    if (CORR == 1)
    {
        TsegCorr = TsegCorr - DVG1 * DDIF1;
    }
    else if (CORR == 2)
    {
        TsegCorr = TsegCorr - DVG2 * DDIF2;
    }
    else if (CORR == 3)
    {
        TsegCorr = TsegCorr - DVG3 * DDIF3;
    }

    return TsegCorr;
}

void TiempoEnHMS(int DATO, int *REF_H, int *REF_M, int *REF_S)
{
    *REF_H = DATO / 3600;
    *REF_M = (DATO % 3600) / 60;
    *REF_S = (DATO % 3600) % 60;
}

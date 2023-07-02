/*
Nombre del Programa: Reporte Censo Alfabetización
Autor: Franco Ibañez
Fecha de creación: 22 de abril de 2023
Fecha de modificación: 02 de julio de 2023
Versión: 01
Nombre del archivo: reporte_censo_alfabetizacion.c
Descripción: El programa recopila datos sobre la educación
  de hombres y mujeres y muestra un resumen estadístico. Los datos se ingresan a
  través de la función `recolectarDatos`, y se almacenan en estructuras para
  cada género. Al final, se imprime un informe con los totales y porcentajes de
  cada categoría de educación para mujeres y hombres.
*/

#include <stdio.h>
#include <stdlib.h>

struct persona
{
  int total;
  int sinEscolaridad;
  int primCompleta;
  int secCompleta;
  int univCompleta;
};

void recolectarDatos(struct persona *registro);

int main()
{
  struct persona mujeres, hombres;
  int sexo, aux;

  aux = -1;

  do
  {
    printf("¿Tiene datos para cargar? Si: 1 / No: 0");
    scanf("%d", &aux);

    if (aux == 1)
    {
      printf("¿Quiere ingresar datos de las Mujeres ( 0 ) u Hombres ( 1 )?: ");
      scanf("%d", &sexo);
      if (sexo == 0)
      {
        recolectarDatos(&mujeres);
      }
      if (sexo == 1)
      {
        recolectarDatos(&hombres);
      }
    }

  } while (aux != 0);

  printf("\n****************************************");
  printf("\n              MUJERES         HOMBRES   ");
  printf("\n****************************************");
  printf("\nTOTAL          %d               %d      ",
         mujeres.total,
         hombres.total);
  printf("\nSin Esc.     %.2f%%             %.2f%%  ",
         (float)mujeres.sinEscolaridad * 100 / mujeres.total,
         (float)hombres.sinEscolaridad * 100 / hombres.total);
  printf("\nPrim. Comp.  %.2f%%             %.2f%%  ",
         (float)mujeres.primCompleta * 100 / mujeres.total,
         (float)hombres.primCompleta * 100 / hombres.total);
  printf("\nSec. Comp.   %.2f%%             %.2f%%  ",
         (float)mujeres.secCompleta * 100 / mujeres.total,
         (float)hombres.secCompleta * 100 / hombres.total);
  printf("\nUniv. Comp.  %.2f%%             %.2f%%  ",
         (float)mujeres.univCompleta * 100 / mujeres.total,
         (float)hombres.univCompleta * 100 / hombres.total);
  printf("\n****************************************\n");

  return 0;
}

void recolectarDatos(struct persona *registro)
{
  int i;
  for (i = 0; i < 5; i++)
  {
    switch (i)
    {
    case 0:
      printf("Ingrese la cantidad total de encuestados/as: ");
      scanf("%d", &(registro->total));
      break;
    case 1:
      printf("Ingrese la cantidad sin escolaridad: ");
      scanf("%d", &(registro->sinEscolaridad));
      break;
    case 2:
      printf("Ingrese la cantidad con Primaria completa: ");
      scanf("%d", &(registro->primCompleta));
      break;
    case 3:
      printf("Ingrese la cantidad con Secundaria completa: ");
      scanf("%d", &(registro->secCompleta));
      break;
    case 4:
      printf("Ingrese la cantidad con Universidad completa: ");
      scanf("%d", &(registro->univCompleta));
      break;

    default:
      break;
    }
  };
}

#include <stdio.h>
#include "limpiar.h"

#define FILAS 3
#define COLUMNAS 7
#define POS 7
#define LONGITUD 15

typedef char marcas[POS][LONGITUD];
typedef float encuesta[FILAS][COLUMNAS];

void llenarMarcas(marcas *arrMarcas);
void llenarTablaResultados(encuesta *tablaResultados);
void limpiar_pantalla();

int main()
{
  encuesta tablaResultados;
  marcas arrMarcas;

  llenarMarcas(&arrMarcas);
  llenarTablaResultados(&tablaResultados);

  printf("**********************************************************");
  printf("\n|Marcas |  %s   |  %s   |  %s   |  %s   |  %s   |  %s   |  %s   |",
         arrMarcas[0], arrMarcas[1], arrMarcas[2], arrMarcas[3], arrMarcas[4],
         arrMarcas[5], arrMarcas[6]);
  printf("\n|Cant. P|  %.0f  |  %.0f  |  %.0f  |  %.0f  |  %.0f  |  %.0f  |  \
  %.0f  |",
         tablaResultados[0][0], tablaResultados[0][1], tablaResultados[0][2],
         tablaResultados[0][3], tablaResultados[0][4], tablaResultados[0][5],
         tablaResultados[0][6]);
  printf("\n|Porc.  |%.2f%%|%.2f%%|%.2f%%|%.2f%%|%.2f%%|%.2f%%|%.2f%%|",
         tablaResultados[1][0], tablaResultados[1][1], tablaResultados[1][2],
         tablaResultados[1][3], tablaResultados[1][4], tablaResultados[1][5],
         tablaResultados[1][6]);
  printf("\n**********************************************************\n");

  return 0;
}

void llenarMarcas(marcas *arrMarcas)
{
  int i;
  for (i = 0; i < COLUMNAS; i++)
  {
    printf("Ingrese la Marca %d: ", i + 1);
    scanf("%s", &(*arrMarcas)[i]);
  }
  limpiar_pantalla();
}

void llenarTablaResultados(encuesta *tablaResultados)
{
  int i;
  int contador = 0;

  for (i = 0; i < COLUMNAS; i++)
  {
    printf("Ingrese la cantidad de gente que eligió la Marca %d: ", i + 1);
    scanf("%f", &(*tablaResultados)[0][i]);
    contador = contador + (*tablaResultados)[0][i];
  }

  for (i = 0; i < COLUMNAS; i++)
  {
    (*tablaResultados)[1][i] = ((*tablaResultados)[0][i] * 100) / contador;
  }

  limpiar_pantalla();
}

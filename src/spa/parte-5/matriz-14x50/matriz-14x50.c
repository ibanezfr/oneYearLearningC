#include <stdio.h>
#include "limpiar.h"

#define COL 6
#define FILAS 5

typedef int matriz[FILAS][COL];

void cargar_matriz(matriz *M, int filas, int col);
void elegir_columna(int *col);
void ordenar_e_imprimir(matriz *N, int col, int C, int F);

int main()
{
  matriz miTabla;
  int colElegida, sigue;

  cargar_matriz(&miTabla, FILAS, COL);

  sigue = 1;

  do
  {
    elegir_columna(&colElegida);

    ordenar_e_imprimir(&miTabla, colElegida, COL, FILAS);

    do
    {
      printf("¿Desea ordenar la matriz en función de otra columna?: 1 (Si)");
      printf(" 0 (NO): ");
      scanf("%d", &sigue);
    } while (sigue != 0 && sigue != 1);

  } while (sigue != 0);

  return 0;
}

void cargar_matriz(matriz *M, int filas, int col)
{
  int contCol, contFilas;
  for (contCol = 0; contCol < col; contCol++)
  {
    for (contFilas = 0; contFilas < filas; contFilas++)
    {
      limpiar();
      printf("Columna %d: \n", contCol + 1);
      printf("Fila %d : ", contFilas + 1);
      scanf("%d", &(*M)[contFilas][contCol]);
    }
  }
}

void elegir_columna(int *col)
{
  do
  {
    printf("Ingrese una columna para ordenar la matriz según sus valores: ");
    scanf("%d", col);
  } while (col < 1 && col > COL);
}

void ordenar_e_imprimir(matriz *N, int col, int C, int F)
{
  int i, j, k, aux;

  for (i = 0; i < F; i++)
  {
    for (j = i + 1; j < F; j++)
    {
      if ((*N)[i][col - 1] < (*N)[j][col - 1])
      {
        for (k = 0; k < C; k++)
        {
          aux = (*N)[i][k];
          (*N)[i][k] = (*N)[j][k];
          (*N)[j][k] = aux;
        }
      }
    }
  }
  for (i = 0; i < F; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%02d ", (*N)[i][j]);
    }
    printf("\n");
  }
}

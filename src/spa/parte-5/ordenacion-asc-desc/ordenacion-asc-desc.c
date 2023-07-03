/*
Nombre del Programa: Ordenación ascendente descendente
Autor: Franco Ibañez
Fecha de creación: 03/07/2023
Fecha de modificación: 03/07/2023
Versión: 01
Nombre del archivo: ordenacion-asc-desc.c
Descripción: Este programa implementa los algoritmos de ordenación "Selection
Sort" y "Bubble Sort" para ordenar un arreglo de enteros en orden
ascendente y descendente.
*/
#include <stdio.h>

void imprArr(int *arr, int N);
void selSort(int *arr, int N);
void bubbSort(int *arr, int N);

int main()
{
  const int POS = 50;
  int miArreglo[] = {739, 215, 482, 601, 943, 377, 524, 128, 931, 376,
                     590, 245, 614, 107, 593, 319, 832, 280, 670, 519,
                     178, 926, 872, 431, 589, 920, 361, 126, 503, 269,
                     731, 617, 964, 388, 892, 975, 176, 749, 340, 468,
                     683, 185, 697, 208, 423, 842, 905, 648, 546, 123};

  printf("Este es el arreglo sin ordenar: \n");
  imprArr(miArreglo, POS);
  printf("\n");

  selSort(miArreglo, POS);
  printf("Arreglo ordenado descendentemente mediante algoritmo\
  Selection Sort: \n");
  imprArr(miArreglo, POS);
  printf("\n");

  bubbSort(miArreglo, POS);
  printf("Arreglo ordenado ascendentemente mediante algoritmo\
  Bubble Sort: \n");
  imprArr(miArreglo, POS);
  printf("\n");

  return 0;
}

void imprArr(int *arr, int N)
{
  int i = 0;
  printf("[");
  for (int i = 0; i < N; i++)
  {
    printf("%d", arr[i]);
    if (i != N - 1)
    {
      printf(", ");
    }
  }
  printf("]\n");
}

void selSort(int *arr, int N)
{
  int i, j, aux;

  for (i = 0; i < N; i++)
  {
    for (j = i + 1; j < N; j++)
    {
      if (arr[i] < arr[j])
      {
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
      }
    }
  }
}

void bubbSort(int *arr, int N)
{
  int i, j, flag, aux;

  flag = 1;
  i = 0;

  while (flag != 0 && i < N)
  {
    flag = 0;
    for (j = 0; j < N - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;

        flag = 1;
      }
    }
    i++;
  }
}

/*
Nombre del Programa: Encuesta Alumnos
Autor: Franco Ibañez
Fecha de creación: 22/04/2023
Fecha de modificación: 01/07/2023
Versión: 1.2
Nombre del archivo: encuesta_alumnos.c
Descripción: Este programa recolecta las notas que cada grupo le asigna a cada
una de las profesoras para, al final, imprimir un informe detallando el conjunto
de notas y el promedio obtenido por cada profesora.
*/

#include <stdio.h>
#include <stdlib.h>

// Asi estoy definiendo constantes
#define FILAS 6
#define COLUMNAS 3
#define POS 3

typedef int NOTAS[FILAS][COLUMNAS];
typedef float PROM[POS];

// Definición de funciones y procedimientos
void imprimirTablaNotas(NOTAS tablaNotas);
void imprimirPromedios(PROM arrProm);
void recoleccionDeNotas(NOTAS tablaNotas);
void calculoDePromedios(NOTAS tablaNotas, PROM arrProm);

int main()
{
  NOTAS tablaNotas;
  PROM arrProm;

  // Recolección de notas
  recoleccionDeNotas(tablaNotas);

  // Cálculo de promedios
  calculoDePromedios(tablaNotas, arrProm);

  // Imprimir Tabla
  system("clear");
  imprimirTablaNotas(tablaNotas);
  imprimirPromedios(arrProm);

  return 0;
};

// SUBPROGRAMAS
// La función imprimirTablaNotas imprime en forma de Tabla la matriz
// de 6 filas y 3 columnas con las notas
void imprimirTablaNotas(NOTAS tablaNotas)
{
  printf("******************************************\n");
  printf("|    | Maestra 1 | Maestra 2 | Maestra 3 |\n");
  printf("******************************************\n");
  printf("| G1 | %4d      | %4d      | %4d      |\n", tablaNotas[0][0],
         tablaNotas[0][1], tablaNotas[0][2]);
  printf("| G2 | %4d      | %4d      | %4d      |\n", tablaNotas[1][0],
         tablaNotas[1][1], tablaNotas[1][2]);
  printf("| G3 | %4d      | %4d      | %4d      |\n", tablaNotas[2][0],
         tablaNotas[2][1], tablaNotas[2][2]);
  printf("| G4 | %4d      | %4d      | %4d      |\n", tablaNotas[3][0],
         tablaNotas[3][1], tablaNotas[3][2]);
  printf("| G5 | %4d      | %4d      | %4d      |\n", tablaNotas[4][0],
         tablaNotas[4][1], tablaNotas[4][2]);
  printf("| G6 | %4d      | %4d      | %4d      |\n", tablaNotas[5][0],
         tablaNotas[5][1], tablaNotas[5][2]);
  printf("******************************************\n");
}

// La función imprimirPromedios calcula los promedios y lo imprime en forma
// de fila
void imprimirPromedios(PROM arrProm)
{
  printf("|NOTA|   %4.2f    |   %4.2f    |   %4.2f    |\n", arrProm[0],
         arrProm[1], arrProm[2]);
  printf("******************************************\n");
}

// Procedimientos
// Estas procedimientos no devuelven nada, pero actualizan los valores de
// la matriz tablaNotas y el arreglo arrProm.
void recoleccionDeNotas(NOTAS tablaNotas)
{
  int i, j;

  for (i = 0; i < FILAS; i++)
  {
    for (j = 0; j < COLUMNAS; j++)
    {
      printf("Ingrese la nota del G%d para la maestra %d: ", i + 1, j + 1);
      scanf("%d", &tablaNotas[i][j]);
    }
  }
}

void calculoDePromedios(NOTAS tablaNotas, PROM arrProm)
{
  int i, j;

  for (j = 0; j < COLUMNAS; j++)
  {
    for (i = 0; i < FILAS; i++)
    {
      arrProm[j] = arrProm[j] + tablaNotas[i][j];
    }
    arrProm[j] = arrProm[j] / FILAS;
  }
}

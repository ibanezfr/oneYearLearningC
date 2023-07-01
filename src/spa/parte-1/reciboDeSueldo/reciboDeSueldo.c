/*
Nombre del Programa: reciboDeSueldo
Autor: Franco Ibañez
Fecha de creación: 22/04/2023
Fecha de modificación: 29/06/2023
Versión: 1.1
Nombre del archivo: reciboDeSueldo.c
Descripción:
  Este programa calcula el sueldo neto de un empleado. Se solicita información
  como nombre, apellido, sueldo bruto, premio, comida, viáticos y días ausentes.
  Luego se realizan cálculos para determinar el sueldo neto teniendo en cuenta
  descuentos y beneficios adicionales. Finalmente, se muestra el resultado
  en pantalla.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nombre[50], apellido[50];
  float sueldoBruto, premio, comida, viaticos, obraSocial, ley19032, jubilacion,
      montoPorAusentismo, sueldoNeto;
  int diasAusentes;

  sueldoNeto = sueldoBruto;

  printf("Ingrese el nombre: ");
  scanf("%s", &nombre);
  printf("Ingrese el apellido: ");
  scanf("%s", &apellido);
  printf("Ingrese el Sueldo Bruto: ");
  scanf("%f", &sueldoBruto);
  printf("Ingrese el premio: ");
  scanf("%f", &premio);
  printf("Ingrese la comida: ");
  scanf("%f", &comida);
  printf("Ingrese los viaticos: ");
  scanf("%f", &viaticos);
  printf("Ingrese la cantidad de días ausentes: ");
  scanf("%d", &diasAusentes);
  system("clear");

  montoPorAusentismo = sueldoBruto / 22;

  if (diasAusentes != 0)
  {
    sueldoNeto = sueldoBruto - montoPorAusentismo;
  }

  sueldoNeto = sueldoNeto - 2 * (sueldoBruto * .03) - sueldoBruto * .11;
  sueldoNeto = sueldoNeto + comida + viaticos + premio;

  printf("\nEmpleado: %s %s\n", nombre, apellido);
  printf("\n\tSueldo Bruto: $%.2f\n", sueldoBruto);
  printf("\n\tViático: $%.2f\n \tPremio: $%.2f\n \tComida: $%.2f\n",
         viaticos, premio, comida);
  printf("\nCantidad de días ausentes: %d\n", diasAusentes);
  printf("Por cada día se descuenta: $%.2f\n", montoPorAusentismo);
  printf("\tMonto descontado por ausentimo: $%.2f\n",
         diasAusentes * montoPorAusentismo);
  printf("\nSe descuenta por Jubilación: $%.2f\n", sueldoBruto * .11);
  printf("Se descuenta por Obra Social: $%.2f\n", sueldoBruto * .03);
  printf("Se descuenta por Ley 19032: $%.2f\n", sueldoBruto * .03);

  printf("\nSueldo Neto: $%.2f\n", sueldoNeto);

  return 0;
}

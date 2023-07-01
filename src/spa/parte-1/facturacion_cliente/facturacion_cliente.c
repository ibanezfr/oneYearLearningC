//  Nombre del Programa: librería-Pepe
//  Autor: Franco Ibañez
//  Fecha de creación: 03/05/2023
//  Fecha de modificación: 29/06/2023
//  Versión: 1.1
//  Nombre del archivo: facturacion_cliente.c
//  Descripción: Este programa genera un recibo detallado para los clientes
//    de un cibercafé. Calcula y muestra los costos asociados al uso de las
//    computadoras,la impresión de hojas y un cargo adicional por
//    concepto de seguro.
//    Al final, se muestra el total de ganancias del negocio.

#include <stdio.h>

int main()
{
  int precioMin, precioHoja, tiempoUso, cantHojas, imprimioHojas,
      precioFinalHojas;
  float seguro, precioFinalPC;

  precioMin = 10;
  precioHoja = 15;
  seguro = 5 * .01;

  // Ingreso de datos
  printf("Ingrese el tiempo utilizado en minutos (sin comas): ");
  scanf("%d", &tiempoUso);

  printf("¿El cliente imprimió hojas? (SI: 1, NO: 0) :");
  scanf("%d", &imprimioHojas);
  if (imprimioHojas == 1)
  {
    printf("Ingrese cantidad de hojas impresas: ");
    scanf("%d", &cantHojas);
  }

  // Cálculos
  precioFinalPC = tiempoUso * precioMin + tiempoUso * seguro;

  if (imprimioHojas == 1)
  {
    precioFinalHojas = cantHojas * precioHoja;
  }

  // Imprimir recibo
  printf("\n\nLibrería PePe");
  printf("\nPrecio X Min utilizados en la PC: $%.2f", precioFinalPC);

  if (imprimioHojas == 1)
  {
    printf("\nPrecio x Hojas Impresas: $%d", precioFinalHojas);
    printf("\nPrecio TOTAL: $%.2f\n", precioFinalPC + precioFinalHojas);
    return 0;
  }

  printf("\nPrecio TOTAL: $%.2f\n", precioFinalPC);
  return 0;
}

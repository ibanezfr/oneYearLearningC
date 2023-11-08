***

# Librería PePe

Una Librería cobra $10 el minuto de uso de una computadora con conexión 
a Internet, y $15 la hoja impresa. Existe un cargo adicional consistente 
en $5 * X, siendo X el 1% del tiempo utilizado, en concepto de seguro.
Se quiere imprimir el recibo de uso de un cliente, en el que se detallen
todos los conceptos.

***

## ¿Qué recibe el programa?

1. Tiempo de uso (variable: tiempoUso)
2. Hojas impresas (variable: cantHojas)

## ¿Cómo debe procesar los datos?

Debe calcular el producto entre el monto fijo y el tiempo utilizado y 
almacenarlo en la variable "costoUtilizacion". Luego, debe calcular el monto en 
concepto de seguro, de la siguiente forma: $5 * tiempoUso, y sumarlo al costo 
final por la utilización. Además, debe calcular el precio por la cantidad 
de hojas.

## ¿Qué debe devolver el programa?

Debe imprimir una suerte de recibo con el detalle de:

Librería PePe:

Utilización PC: $costoUtilizacion
Impresión: $precioImpresion

Total: $total

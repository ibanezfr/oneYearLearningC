# Reporte de Alfabetización de la Población

En el último censo, una de las preguntas se refirió al `"grado de alfabetización"`
de la población mayor de 18 años. Se utilizaron las siguientes categorías: 
`"sin escolaridad"`, `"primaria completa"`, `"secundaria completa"` y 
`"universitaria completa"`. Se conoce la cantidad de hombres y mujeres 
correspondientes a cada categoría y se desea generar un reporte identificando 
los porcentajes parciales, como se muestra a continuación:

Total de mujeres encuestadas: M.
- Sin escolaridad: N1%
- Primaria completa: C1%
- Secundaria completa: S1%
- Universitaria completa: U1%

Total de Hombres encuestados: H.
- Sin escolaridad: N2%
- Primaria completa: C2%
- Secundaria completa: S2%
- Universitaria completa: U2%

Total de Encuestados: W

***

## Entrada

|                   | mujeres | hombres |
|-------------------|---------|---------|
| Total             | X       | Y       |
| Sin escolaridad   | a       | b       |
| Primaria Comp.    | a       | b       |
| Sec. Comp.        | a       | b       |
| Univ. Comp.       | a       | b       |


## Procesamiento

A partir de los 2 registros con 5 componentes, recorrerlos de tal forma de poder
imprimir luego una suerte de tabla con los porcentajes parciales.

## Salida

A continuación, se muestra una suerte de tabla con los porcentajes parciales 
para cada categoría de educación.

|                     | Mujeres | Hombres |
|---------------------|---------|---------|
| Sin escolaridad     | N1%     | N2%     |
| Primaria completa   | C1%     | C2%     |
| Secundaria completa | S1%     | S2%     |
| Universitaria completa | U1%  | U2%     |

***

### [Aquí tienes el pseudocódigo](./reporte_censo_alfabetizacion.pseudo)
### [Aquí tienes la codificación en C](./reporte_censo_alfabetizacion.c)

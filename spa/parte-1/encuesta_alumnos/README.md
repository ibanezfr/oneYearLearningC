***

# Calificación de Maestras en una Escuela Primaria

En una escuela primaria se solicita a los 30 alumnos del sexto curso que 
califiquen a sus 3 maestras. Para hacerlo, deben agruparse de a 5 y cada grupo 
asignar una nota entre 1 y 10 a cada maestra. Se requiere un informe en el que 
se detalle, para cada maestra, la nota que cada grupo le asignó y la nota 
promedio que obtuvo.

***

## ESTRATEGIA

1. ENTRADA (18)
    - `1.1` Ingresar 3 notas del grupo 1
    - `1.2` Ingresar 3 notas del grupo 2
    - `1.3` Ingresar 3 notas del grupo 3
    - `1.4` Ingresar 3 notas del grupo 4
    - `1.5` Ingresar 3 notas del grupo 5
    - `1.6` Ingresar 3 notas del grupo 6

2. PROCESO
   - `2.1` Guardar en la matriz `tablaNotas` (i, j) con i=1 y j entre 1 y 3, las 
   notas del G1 a las M1, M2 y M3.
   - `2.2` Repetir el paso 2.1 seis veces para los seis grupos.

3. SALIDA
   - `3.1` Calcular el promedio de cada maestra y almacenarlos en el arreglo 
   `arrProm`.
   - `3.2` Imprimir las notas que cada una obtuvo y sus promedios en la 
   siguiente tabla:

  |     | Maestra 1 | Maestra 2 | Maestra 3 |
  |-----|-----------|-----------|-----------|
  | G1  |     8     |     9     |     3     |
  | G2  |     2     |           |           |
  | G3  |           |           |           |
  | G4  |           |           |           |
  | G5  |           |           |           |
  | G6  |           |           |           |
  | NOTA|           |           |           |
  
  Notas promedio: [prom1, prom2, prom3]
  
`tablaNotas[i,j,k,l]`  
`tablaNotas[1,1,2,1]`


***
### [Solución en pseudocódigo](./encuesta_alumnos.pseudo)

### [Codificación en lenguaje C](./encuesta_alumnos.c)
***

<a href="#"
   title="Captura del output en la terminal del ejercicio">
  <img src="../../../assets/images/thumbnail-tp1-parte1-ej3-pseudo-y-C.webp"
       alt="Captura del output en la terminal del ejercicio"
       width="555" height="300"
       style="border: 1px solid black; text-align: center;">
</a>

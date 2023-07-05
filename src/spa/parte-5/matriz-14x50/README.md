# Matriz 14 x 50
Se desea cargar una matriz de 14x50, ordenarla por una columna indicada, y
luego imprimir la matriz resultado. La ordenación también debe realizarla un
procedimiento.

```ruby
Programa Matriz-14x50
Constantes
COL : Entero 3;
FILAS : Entero 3;

TiposEstructurados 
matriz : ARREGLO(FILAS)(COL) : Entero 3 : Entero 3

Variables
miTabla : matriz;
colElegida : Entero 2;
sigue: Entero 1;

COL := 14;
FILAS := 50;

Inicio
/* El usuario deberá llenar la matriz por filas.*/
Procedimiento cargar-matriz (REF M : matriz)
Variables
contCol, contFilas : Entero 3
RepetirPara contFilas = 1; contFilas = FILAS; 1
  RepetirPara contCol = 1; contCol = COL; 1
    Imprimir: "Ingrese la columna", contCol, " de la Fila ",contFilas;
    Leer: M(contFilas)(contCol);
  FinRepetirPara
FinRepetirPara

FinProcedimiento

/* Pide al usuario una columna para ordenar la matriz */
Procedimiento elegir-columna (REF col : Entero 2)
  Imprimir: "Ingrese una columna para ordenar la matriz según sus valores: ";
  Leer: col;
FinProcedimiento

/* Ordena e imprime la matriz según una columna dada */
Procedimiento ordenar-e-imprimir (REF N : matriz, c : Entero 2, 
                                  C : Entero 2, F : Entero 2)
Variables 
aux : Entero 3
i, j : Entero 2

Hacer
RepetirPara i = 1; i = F - 1; 1
  RepetirPara j = i + 1; j = F; 1
      aux := N(i);
      Si N(i)(c) < N(j)(c) Entonces /* Ordena de mayor a menor */
        N(i) := N(j);
        N(j) := aux;
      FinSi
  FinRepetirPara
FinRepetirPara

RepetirPara i = 1; i = F; 1
  RepetirPara j = 1; j = C; 1
    Imprimir: N(i)(j) + " "
  FinRepetirPara
FinRepetirPara

FinProcedimiento

Hacer
  cargar-matriz(REF miTabla);

  sigue := 1;

  RepetirMientras ( sigue < > 0 )
    elegir-columna(REF colElegida);
    ordenar-e-imprimir(REF miTabla,colElegida,)
    Imprimir: "¿Desea ordenar la matriz en función de otra columna?:
               1 (Si) 0 (NO)"
    Leer: sigue;
  FinRepetirMientras 

FinHacer

FinInicio

FinPrograma
```

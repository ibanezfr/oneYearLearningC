
# Lo encuetra la primera vez y termina el algoritmo
```php
# Realizar un algoritmo que permita buscar en un vector de 1500 posiciones la
# ocurrencia de una clave de tipo carácter introducida por el usuario.

Programa buscar-clave
Constantes
POS : Entero 4

TiposEstructurados
vector : ARREGLO(POS) : Caracter

Variables
miArreglo : vector # Supondré que está cargado en memoria
target : Caracter
found : Entero 1
i, posicion : Entero 4

POS := 1500;

Inicio
Hacer

Imprimir: "Ingrese el caracter a buscar: "
Leer: target;

found := 0;
i := 1;
  RepetirMientras found ( < > 0 y i <= POS )
    Si ( miArreglo(i) = target ) Entonces
      found := 1;
      posicion := i;
    FinSi
    i++;
  FinRepetirMientras

  Si ( found = 1 ) Entonces 
    Imprimir: "El caracter ",target," SI está dentro del vector";
    Imprimir: " en la posición ",posicion;
  Sino
    Imprimir: "El caracter ",target," NO se haya dentro del vector."
  FinSi
FinHacer
FinInicio
FinPrograma

```

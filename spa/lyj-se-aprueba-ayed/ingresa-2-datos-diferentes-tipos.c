#include <stdio.h>
#include <stdlib.h>

void main()
{
	// Definición de las variables
	int legajo;
	float nota;
	system("clear");
	// Ingreso de datos con función scanf()
	printf("Ingrese su legajo:");
	scanf("%d",&legajo);
	printf("Ingrese su nota con dos decimales:");
	scanf("%f",&nota);
	// Salida de datos ingresados con función fprint
	printf("\n\n Legajo=%d Nota=%g\n", legajo, nota);
}

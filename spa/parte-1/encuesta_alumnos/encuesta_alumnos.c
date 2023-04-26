#include <stdio.h>
// #include <math.h>

int main ( ){

    //Variables
    int M1G1, M1G2, M1G3, M1G4, M1G5, M2G1, M2G2, M2G3, M2G4, M2G5, 
    M3G1, M3G2, M3G3, M3G4, M3G5;
    int accM1, accM2, accM3;
    float prmM1, prmM2, prmM3;

    //Inicialización
    accM1 = 0;
    accM2 = 0;
    accM3 = 0;

    // Hacer
        //Recolección de datos
        // Maestra 1
        printf("Ingrese la nota del G1 para la M1: ");
        scanf("%d",&M1G1);
        accM1 = accM1 + M1G1;
        printf("Ingrese la nota del G2 para la M1: ");
        scanf("%d",&M1G2);
        accM1 = accM1 + M1G2;
        printf("Ingrese la nota del G3 para la M1: ");
        scanf("%d",&M1G3);
        accM1 = accM1 + M1G3;
        printf("Ingrese la nota del G4 para la M1: ");
        scanf("%d",&M1G4);
        accM1 = accM1 + M1G4;
        printf("Ingrese la nota del G5 para la M1: ");
        scanf("%d",&M1G5);
        accM1 = accM1 + M1G5;

        // Maestra 1
        printf("Ingrese la nota del G1 para la M2: ");
        scanf("%d",&M2G1);
        accM2 = accM2 + M2G1;
        printf("Ingrese la nota del G2 para la M2: ");
        scanf("%d",&M2G2);
        accM2 = accM2 + M2G2;
        printf("Ingrese la nota del G3 para la M2: ");
        scanf("%d",&M2G3);
        accM2 = accM2 + M2G3;
        printf("Ingrese la nota del G4 para la M2: ");
        scanf("%d",&M2G4);
        accM2 = accM2 + M2G4;
        printf("Ingrese la nota del G5 para la M2: ");
        scanf("%d",&M2G5);
        accM2 = accM2 + M2G5;

        // Maestra 3
        printf("Ingrese la nota del G1 para la M3: ");
        scanf("%d",&M3G1);
        accM3 = accM3 + M3G1;
        printf("Ingrese la nota del G2 para la M3: ");
        scanf("%d",&M3G2);
        accM3 = accM3 + M3G2;
        printf("Ingrese la nota del G3 para la M3: ");
        scanf("%d",&M3G3);
        accM3 = accM3 + M3G3;
        printf("Ingrese la nota del G4 para la M3: ");
        scanf("%d",&M3G4);
        accM3 = accM3 + M3G4;
        printf("Ingrese la nota del G5 para la M3: ");
        scanf("%d",&M3G5);
        accM3 = accM3 + M3G5;

        //Fin Recolección de datos

            //Operaciones con datos

            prmM1 = accM1 / 5;
            prmM2 = accM2 / 5;
            prmM3 = accM3 / 5;

            //Fin Operaciones con datos

            // Impresión de resultados
            printf("\n\n\nLa Maestra M1 obtuvo: \n");       
            printf("\t %d puntos del G1\n",M1G1);    
            printf("\t %d puntos del G2\n",M1G2);    
            printf("\t %d puntos del G3\n",M1G3);    
            printf("\t %d puntos del G4\n",M1G4);    
            printf("\t %d puntos del G5\n",M1G5);   
            printf("\t\t Su promedio es: %.2f puntos\n",prmM1);

            printf("La Maestra M2 obtuvo: \n");       
            printf("\t %d puntos del G1\n",M2G1);    
            printf("\t %d puntos del G2\n",M2G2);    
            printf("\t %d puntos del G3\n",M2G3);    
            printf("\t %d puntos del G4\n",M2G4);    
            printf("\t %d puntos del G5\n",M2G5);   
            printf("\t\t Su promedio es: %.2f puntos\n",prmM2);
            
            /*
            Si yo quiero imprimir un número racional (con coma) en la pantalla, usando lenguage C, 
            debo indicarle con el caracter reservado %.xF donde x es la cantidad de decimales
            */

            printf("La Maestra M3 obtuvo: \n");       
            printf("\t %d puntos del G1\n",M3G1);    
            printf("\t %d puntos del G2\n",M3G2);    
            printf("\t %d puntos del G3\n",M3G3);    
            printf("\t %d puntos del G4\n",M3G4);
            printf("\t %d puntos del G5\n",M3G5);   
            printf("\t\t Su promedio es: %.2f puntos\n",prmM3);
            // Fin Impresión de resultados
    // Fin Hacer

    return 0;
}


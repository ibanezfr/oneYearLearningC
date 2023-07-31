#include <stdio.h>

int main()
{
    // Variables
    int prod1, prod2, prod3, totprod1, totprod2, totprod3;
    int i, producto;
    int sigueTurno;
    int Total;
    float por1, por2, por3;

    totprod1 = 0;
    totprod2 = 0;
    totprod3 = 0;

    // Hacer
    for (i = 1; i <= 4; i++)
    {
        prod1 = 0;
        prod2 = 0;
        prod3 = 0;
        sigueTurno = 1;

        while (sigueTurno == 1)
        {
            printf("Ingrese el tipo de producto 1/2/3: ");
            scanf("%d", &producto);

            switch (producto)
            {
            case 1:
                prod1 = prod1 + 1;
                break;
            case 2:
                prod2 = prod1 + 1;
                break;
            case 3:
                prod3 = prod3 + 1;
                break;
            default:
                printf("Ingrese el tipo de producto 1/2/3: ");
                scanf("%d", &producto);
                break;
            }

            printf("¿Hay más Productos: 1:Sí , 0:No ?: ");
            scanf("%d", &sigueTurno);
        }
        printf("Total de productos Turno: %d\n", i);
        printf("Producto 1: %d\n", prod1);
        printf("Producto 2: %d\n", prod2);
        printf("Producto 3: %d\n", prod3);

        totprod1 = totprod1 + prod1;
        totprod2 = totprod2 + prod2;
        totprod3 = totprod3 + prod3;
    }

    Total = totprod1 + totprod2 + totprod3;
    printf("\nLa producción total es de %d\n\n", Total);

    por1 = totprod1 * 100 / Total;
    por2 = totprod2 * 100 / Total;
    por3 = totprod3 * 100 / Total;

    printf("El porcentaje del producto 1 es de %.2f \n", por1);
    printf("El porcentaje del producto 2 es de %.2f \n", por2);
    printf("El porcentaje del producto 3 es de %.2f \n", por3);

    // Fin Hacer

    return 0;
}

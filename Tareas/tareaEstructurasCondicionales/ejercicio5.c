#include <stdio.h>
#include "funciones.h"

#define MENU "1. Sumar dos números\n2. Restar dos números\n3. Multiplicar dos números\n4. Salir\nSeleccione una opción, por favor: "
#define MSJ1 "Ingrese dos números, por favor:\n"

int main(void) {
    int opcion = 0;
    int num1 = 0;
    int num2 = 0;

    for (;;) {
        printf(MENU);
        scanf("%d", &opcion);

        if (opcion == 4) {
            printf("Saliendo del programa... ¡Adiós!\n");
            break;
        }

        switch (opcion) {
            case 1:
                printf(MSJ1);
                scanf("%d %d", &num1, &num2);
                sumar(num1, num2);
                break;
            case 2:
                printf(MSJ1);
                scanf("%d %d", &num1, &num2);
                restar(num1, num2);
                break;
            case 3:
                printf(MSJ1);
                scanf("%d %d", &num1, &num2);
                multiplicar(num1, num2);
                break;
            default:
                printf("Opción inválida. Intente de nuevo, por favor.\n");
                break;
        }
    }

    return 0;
}

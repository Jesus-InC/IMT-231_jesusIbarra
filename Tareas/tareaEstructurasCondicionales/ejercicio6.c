#include <stdio.h>
#include "funciones.h"

#define MSJ1 "Ingrese dos números enteros, por favor (0 0 para salir):\n"

int main(void) {
    int num1 = 0;
    int num2 = 0;

    for (;;) {
        printf(MSJ1);
        scanf("%d %d", &num1, &num2);

        if (num1 == 0 && num2 == 0) {
            printf("Saliendo del programa... ¡Adiós!\n");
            break;
        }
        comparar(num1, num2);
    }

    return 0;
}

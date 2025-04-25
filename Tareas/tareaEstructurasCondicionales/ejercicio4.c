#include <stdio.h>
#include "funciones.h"

int main(void) {
    int num = 0;
    int suma = 0;
    printf("Por favor, vaya ingresando números enteros positivos (número negativo para salir):\n");
    for (;;) {
        scanf("%d", &num);
        if (num < 0) {
            printf("Suma total acumulada: %d\n", suma);
            break;
        }

        suma = acumular(suma, num);
    }

    return 0;
}

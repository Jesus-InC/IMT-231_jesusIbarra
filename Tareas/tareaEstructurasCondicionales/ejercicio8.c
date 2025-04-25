#include <stdio.h>
#include "funciones.h"

#define MSJ "Ingrese un número entero positivo (0 o negativo para salir): "

int main(void) {
    int numero = 0;

    for (;;) {
        printf(MSJ);
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Programa finalizado.\n");
            break;
        }

        int resultado = calcularFactorial(numero);
        printf("El factorial de %d es: %d\n", numero, resultado);
    }

    return 0;
}

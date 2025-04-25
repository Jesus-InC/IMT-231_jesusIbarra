#include <stdio.h>
#include "funciones.h"

#define MSJ "Ingrese un número (-1 para salir): "

int main(void) {
    int numero = 0;
    int contador = 0;

    for (;;) {
        printf(MSJ);
        scanf("%d", &numero);

        if (numero == -1) {
            printf("Se ingresaron %d múltiplos de 3 en total.\n", contador);
            break;
        }

        if (multiploTres(numero)) {
            contador++;
        }
    }

    return 0;
}

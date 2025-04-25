#include <stdio.h>
#include "funciones.h"
#define MSJ "Ingrese un número entero positivo con más de un dígito (1-9 para salir): "

int main(void) {
    int num = 0;

    for (;;) {
        printf(MSJ);
        scanf("%d", &num);

        if (num > 0 && num < 10) {
            printf("Número con un solo dígito. Finalizando el programa.\n");
            break;
        }

        if (num >= 10) {
            int resultado = invertirNumero(num);
            printf("Número invertido: %d\n", resultado);
        } else {
            printf("Ingrese un número válido mayor que 0, por favor.\n");
        }
    }

    return 0;
}

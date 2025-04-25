#include <stdio.h>
#include "funciones.h"

int main(void) {
    int num;
    for (;;) {
        printf("Por favor, ingrese un número entero (-1 para salir): ");
        scanf("%d", &num);

        if (num == -1) {
            printf("Saliendo del programa...\n");
            break;
        }

        TipoNumero tipo = clasificarNumero(num);

        switch (tipo) {
            case PAR:
                printf("El número %d es PAR.\n", num);
                break;
            case IMPAR:
                printf("El número %d es IMPAR.\n", num);
                break;
        }
    }
    return 0;
}


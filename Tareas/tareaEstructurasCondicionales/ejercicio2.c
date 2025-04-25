#include <stdio.h>
#include "funciones.h"

int main(void) {
    int num;

    for (;;) {
        printf("Por favor, ingrese un número entero positivo (0 para salir): ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Finalizando programa...\n");
            break;
        }else if(num < 0){
            printf("Por favor, ingrese solo números positivos\n");
        }else{
            int cantidad = contarDigitos(num);
            printf("El número %d tiene %d dígito(s).\n", num, cantidad);
        }
    }

    return 0;
}


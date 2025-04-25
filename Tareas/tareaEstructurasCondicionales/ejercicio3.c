#include <stdio.h>
#include "funciones.h"

int main(void) {
    Semaforo estado = ROJO;
    int ciclos = 0;

    for (;;) {
        mostrarEstado(estado);

        estado = siguienteEstado(estado);
        ciclos++;

        if (ciclos == 10) {
            printf("Fin de la simulación de semáforo.\n");
            break;
        }
    }

    return 0;
}

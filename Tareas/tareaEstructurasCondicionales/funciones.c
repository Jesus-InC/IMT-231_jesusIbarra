#include "funciones.h"
#include <stdio.h>

//EJERCICIO 1

TipoNumero clasificarNumero(int num) {
    if (num % 2 == 0) {
        return PAR;
    } else {
        return IMPAR;
    }
}

//EJERCICIO 2

int contarDigitos(int num) {
    int contador = 0;

    while (num > 0) {
        contador++;
        num = num / 10;
    }

    return contador;
}

//EJERCICIO 3

Semaforo siguienteEstado(Semaforo actual) {
    switch (actual) {
        case ROJO:
            return VERDE;
        case VERDE:
            return AMARILLO;
        case AMARILLO:
            return ROJO;
    }
}

void mostrarEstado(Semaforo estado) {
    switch (estado) {
        case ROJO:
            printf("Semáforo en ROJO\n");
            break;
        case VERDE:
            printf("Semáforo en VERDE\n");
            break;
        case AMARILLO:
            printf("Semáforo en AMARILLO\n");
            break;
    }
}

//EJERCICO 4

int acumular(int sumaActual, int nuevoValor) {
    return sumaActual + nuevoValor;
}

//EJERCICIO 5

int sumar(int a, int b) {
    int resultado = a + b;
    printf("La suma de los dos números ingresados es: %d\n", resultado);
    return resultado;
}

int restar(int a, int b) {
    int resultado = a - b;
    printf("La resta de los dos números ingresados es: %d\n", resultado);
    return resultado;
}

int multiplicar(int a, int b) {
    int resultado = a * b;
    printf("El producto de los dos números ingresados es: %d\n", resultado);
    return resultado;
}

//EJERCICIO 6

void comparar(int a, int b) {
    if (a > b) {
        printf("%d es mayor que %d\n", a, b);
    } else if (b > a) {
        printf("%d es mayor que %d\n", b, a);
    } else {
        printf("Ambos números son iguales: %d\n", a);
    }
}

//EJERCICIO 7

int multiploTres(int num) {
    return num % 3 == 0;
}

//EJERCICIO 8

int calcularFactorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

//EJERCICIO 9

int invertirNumero(int num) {
    int invertido = 0;

    while (num != 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return invertido;
}
#ifndef FUNCIONES_H
#define FUNCIONES_H

//EJERCICIO 1

typedef enum {
    PAR,
    IMPAR
} TipoNumero;

TipoNumero clasificarNumero(int num);

//EJERCICIO 2 

int contarDigitos(int num);

//EJERCICIO 3

typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
Semaforo siguienteEstado(Semaforo actual);
void mostrarEstado(Semaforo estado);

//EJERCICIO 4

int acumular(int sumaActual, int nuevoValor);

//EJERCICIO 5

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

//EJERCICIO 6

void comparar(int a, int b);

//EJERCICIO 7

int multiploTres(int num);

//EJERCICIO 8

int calcularFactorial(int num);

//EJERCICIO 9

int invertirNumero(int num);

#endif

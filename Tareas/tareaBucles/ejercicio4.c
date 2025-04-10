#include <stdio.h>

int main(void) {
	int num = 0;
	int contador = 0;
	printf("Por favor, ingrese un número entero: ");
    	scanf("%d", &num);
	if(num == 0){
		contador = 1;
	}
    	while (num!=0) {
		num /= 10;
        	contador++;
    	}
	printf("El número tiene %d dígitos.\n", contador);
    	return 0;
}
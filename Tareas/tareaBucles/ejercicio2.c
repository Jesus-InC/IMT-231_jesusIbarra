#include <stdio.h>

int main(void) {
	int num = 0;
	int suma = 0;
	printf("Por favor, ingrese un número: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		suma += i;
    	}
	printf("La suma desde 1 hasta %d es: %d\n", num, suma);
   	return 0;
}
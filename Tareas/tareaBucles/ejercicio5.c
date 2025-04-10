#include <stdio.h>

int main(void) {
	char palabra[100];
    	int longitud = 0;
    	printf("Por favor, ingresa una palabra: ");
    	scanf("%s", palabra);

	//'\0' identificación del caracter nulo de una cadena
   	while (palabra[longitud] != '\0') {
        longitud++;
    	}

    	printf("Palabra invertida: ");
    	for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    	}
	printf("\n");
    	return 0;
}
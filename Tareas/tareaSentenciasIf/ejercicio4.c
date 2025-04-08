#include <stdio.h>

int main(void) {
	int edad=0;
	printf("Por favor, ingrese su edad\n");
	scanf("%d", &edad);
	if(edad<13){
		printf("Infancia.\n");
	}else if(edad<=17 && edad>=13){
		printf("Adolescencia.\n");
	}else{
		printf("Adultez.\n");
	}
    return 0;
}
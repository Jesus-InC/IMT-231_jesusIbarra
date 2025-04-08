#include <stdio.h>

int main(void) {
	int año=0;
	printf("Por favor, ingrese un año.\n");
	scanf("%d", &año);
	if (año%4==0 && (año%400==0 || año%100 != 0)){
		printf("El año es bisiesto.\n");
	}else{
		printf("El año no es bisiesto.\n");
	}
    return 0;
}
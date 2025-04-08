#include <stdio.h>

int main(void) {
	int numA=0;
	int numB=0;
	printf("Por favor, ingrese el primer número\n");
	scanf("%d", &numA);
	printf("Por favor, ingrese el segundo número\n");
	scanf("%d", &numB);
	if(numA>numB){
		printf("El número mayor es: %d\n", numA);
	}else if(numA<numB){
		printf("El número mayor es: %d\n", numB);
	}else{
		printf("Ambos números son iguales.\n");
	}
    return 0;
}
#include <stdio.h>

int main(void) {
	int num=0;
	printf("Por favor, ingrese un número entero\n");
	scanf("%d", &num);
	if(num>0){
		printf("El número es positivo\n");
	}else if(num<0){
		printf("El número es negativo\n");
	}else{
		printf("El número es cero.\n");
	}
    return 0;
}

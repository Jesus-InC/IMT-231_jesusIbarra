#include <stdio.h>

int main(void) {
	int x = 0;
	int tabla = 0;
	printf("Por favor, ingrese un número: ");
    	scanf("%d", &x);
    	for (int i = 1; i <= 10; i++){
        	tabla = x*i;
		printf("%d x %d = %d\n", x, i, tabla); 
    	}
    	return 0;
}
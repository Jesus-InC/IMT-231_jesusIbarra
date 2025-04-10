#include <stdio.h>

int main(void) {
	int i = 0;
	int num = 0;
	printf("Por favor, ingrese un número: ");
	scanf("%d", &num);
	while (i <= num) {
		printf("%d\n", i);
		i++;
	}
   	return 0;
}
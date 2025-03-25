#include<stdio.h>

void caixa (int r, int *n100, int *n50, int *n10, int *n5, int *n1);

void caixa (int r, int *n100, int *n50, int *n10, int *n5, int *n1) {
	*n100 = r / 100;
	*n50 = r %100 / 50;
	*n10 = r %100 %50 / 10;
	*n5 = r  %100 %50 %10 / 5;
	*n1 = r  %100 %50 %10 %5 / 1;
}

int main() {
	int valor;
	int nota100, nota50, nota10, nota5, nota1;
	printf("Digite um valor: \n");
	scanf("%d" , &valor);
	
	caixa(valor, &nota100, &nota50, &nota10, &nota5, &nota1);
	printf("%d nota(s) de 100: \n", nota100);
	printf("%d nota(s) de 50:  \n", nota50);
	printf("%d nota(s) de 10:  \n", nota10);
	printf("%d nota(s) de 5:   \n", nota5);
	printf("%d nota(s) de 1:   \n", nota1);

return 0;
}


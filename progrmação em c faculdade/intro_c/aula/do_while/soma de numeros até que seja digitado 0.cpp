#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	double num, soma_num = 0;
	printf("digite um n�mero qualquer para ser somado: ");
	do{
		scanf("%lf", &num);
		soma_num += num;
	}while(num>0);
	printf("a soma dos n�meros digitados �: %lf", soma_num);
}

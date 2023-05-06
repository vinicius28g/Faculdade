#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	int qnt_num= 0;
	float num, soma_num =0;
	do{
		printf("digite um numero qualquer! caso deseje para digete 0: ");
		scanf("%f",&num);
		qnt_num++;
		soma_num += num;
	}while(num !=0);
	
	qnt_num--;
	printf("a quantidade de números digitados foi: %d\n", qnt_num);
	printf ("a média dos números é: %.3f\n", soma_num/qnt_num);
}

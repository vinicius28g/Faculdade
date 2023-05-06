
#include<stdio.h>
#include <stdlib.h>

int opcao;
 
int main(){

	printf("digite o numero da alternativa que voce pertence\n");
	printf("1) alienigena\n");
	printf("2) Mulher\n");
	printf("3) Homen \n");
	scanf("%d", &opcao);
	
	if(opcao ==3 || opcao ==2)
		printf("voce pode entra, seja bem vindo\n");
	else
		printf("voce nao pode entra. So eh permitido a entrada de humanos\n");
	return 0;
	
}
/*Guilherme nicollas da silva brito
07279152317
turma de tarde da sexta*/

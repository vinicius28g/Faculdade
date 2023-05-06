
//Aluno: Wallison Fernando Alves da Silva;
//matricula: 202202903388;
#include<stdio.h>
#include <stdlib.h>

int escolha;
 
int main(){
	printf("digite o numero correspondente a opcao do seu genero\n");
	printf("1- Homen\n");
	printf("2- Mulher\n");
	printf("3- alienigina\n");
	scanf("%d", &escolha);
	
	if(escolha ==1 || escolha ==2)
		printf("Bem vindo, voce pode entra");
	else
		printf("infelismente sua especie n tem autorizacaõ para entra");
	return 0;
	
}

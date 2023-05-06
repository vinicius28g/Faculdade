//Aluno: Wallison Fernando Alves da Silva
//matricula:202202903388
#include<stdio.h>
#include <stdlib.h>

int  ac, er = 0;
int escolha;

int main(){	
	printf("1º quanto eh 2x5?\n");
	printf("1- 10\n");
	printf("2- 30\n");
	printf("c) 15\n");
	printf("\n\n");
	scanf("%d", &escolha);
	if(escolha == 1){
		ac++;
		printf("parabens, acertou\n");
	}else{
			printf("voce errou\n");
			printf("a resposta certa  eh alternativa 1- 10\n");
			er++;
		}
		
	printf("\n\n");
	printf("2º quanto eh 2-2?\n");
	printf("1: 2\n");
	printf("2: -2\n");
	printf("3: 0\n");
	printf("\n\n");
	scanf("%s", &escolha);
	if(escolha ==3){
		ac++;
		printf("parabens, acertou\n");
	}else{
			printf("voce errou\n");
			printf("a resposta certa  eh alternativa 3- 0\n");
			er++;
		 }
	printf("\n\n");
	printf("3º quanto eh 10+10\n");
	printf("1- 20\n");
	printf("2- 30\n");
	printf("3- 10\n");
	scanf("%s", &escolha);
	if(escolha ==1){
		printf("parabens, acertou\n");	
		ac++;
	}else{
			printf("voce errou\n");
			printf("a resposta certa  eh letra 1- 10\n");
			er++;
		 }	 
	printf("\n\n");
	printf("voce acertou: %d\n", ac);
	printf("e errou: %d", er);
	return 0;
}


#include<stdio.h>
#include <stdlib.h>


int  ganho, opcao, perda = 0;

int main(){
	
	printf("quais sao as 7 notas musicais?\n");
	printf("1- do, re, mi, fa, sol, la, si\n");
	printf("2- do, sol, fa, se, ca\n");
	printf("3- ca, ce, sol, sa\n");
	printf("\n");
	scanf("%d", &opcao);
	if(opcao == 1){
		
		printf("voce acertou\n");
		ganho++;
	}else{
			printf("voce errou. resposta: 1\n");
			perda++;
		}
		
	printf("\n");
	
	printf("dentre os estrumentos abaixo qual é de sopro?\n");
	printf("1- baixo\n");
	printf("2- vilao\n");
	printf("3- saxispfone\n");
	printf("\n");
	scanf("%d", &opcao);
	if(opcao == 3){
		
		printf("voce acertou\n");
		ganho++;
	}else{
			printf("voce errou. resposta: 3\n");
			perda++;
		}
	
	printf("\n");
	
printf("quais sao as claves da teoria musical?\n");
	printf("1- do, ca, we\n");
	printf("2- do, se, re\n");
	printf("3- do, sol, fa\n");
	printf("\n");
	scanf("%d", &opcao);
	if(opcao == 3){
		
		printf("voce acertou\n");
		ganho++;
	}else{
			printf("voce errou. resposta: 1\n");
			perda++;
		}
		 
	printf("\n");
	printf("voce acertou: %d\n", ganho);
	printf("voce errou: %d", perda);
	return 0;
}

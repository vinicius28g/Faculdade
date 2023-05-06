/*informa se um personagem pode esfaquiar ou atirar;
Aluno: Vinicius Guimarães dos Santos;
matricula: 202203022709;
ciências da coputação 1º periodo;*/

#include<stdio.h>
#include <stdlib.h>

int opcao;
 
int main(){
	printf("Para permitir que voce use a sua arma preciso saber qual é ela\n");
	printf("digite o numero correspondente a opcao da sua arma\n");
	printf("1- rifle\n");
	printf("2- pistola\n");
	printf("3- faca\n");
	scanf("%d", &opcao);
	
	if(opcao ==1 || opcao ==2)
		printf("voce pode atirar no oponente");
	else
		printf("voce pode esfaquiar o oponente");
	return 0;
	
}

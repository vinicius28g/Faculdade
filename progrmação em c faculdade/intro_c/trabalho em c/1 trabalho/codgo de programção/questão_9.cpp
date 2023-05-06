/*informa se uma determinada "pessoa" ou coisa pode entra na MIB;
Aluno: Vinicius Guimarães dos Santos;
matricula: 202203022709;
ciências da coputação 1º periodo;*/

#include<stdio.h>
#include <stdlib.h>

int opcao;
 
int main(){
	printf("para permitir a sua entada precisamos sabr qual o seu genero e especie\n");
	printf("digite o numero correspondente a opcao do seu genero\n");
	printf("1- Homen\n");
	printf("2- Mulher\n");
	printf("3- outra especie\n");
	scanf("%d", &opcao);
	
	if(opcao ==1 || opcao ==2)
		printf("Bem vindo a MIB");
	else
		printf("sua especie nao eh permitida nesse local");
	return 0;
	
}

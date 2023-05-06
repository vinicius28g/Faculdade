
#include<stdio.h>
#include <stdlib.h>

int opcao;
 
int main(){
	printf("digite o numero da arma que voce esta usando no jogo\n");
	printf("1- pistola\n");
	printf("2- faca\n");
	printf("3- rifle\n");
	scanf("%d", &opcao);
	printf("-----------------------------------------------------------------------------------\n");
	if(opcao ==1 || opcao ==3)
		printf("atira menino, taca fogo !!");
	else
		printf("pode esfaquear, arrocha!!");
	return 0;
	
}
/*Guilherme nicollas da silva brito
07279152317
turma de sexta na parte da tarde*/


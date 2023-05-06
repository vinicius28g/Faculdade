#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaTeste.h"

int main(){
	float num;
	int numint;
	int op;
	char palavra[50];
	
	printf( "1- cubo de um numero\n"
			"2- maior numero\n"
			"3- antecessor e sucessor de um numero\n");
	printf("escolha uma aopcao: ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			system("cls");
			printf("escreva um numero para retornar o seu cubo: ");
			scanf("%f", &num);
			printf("\no resultado eh: %.2f", cubo(num));
		break;
		
		case 2:
			system("cls");
			printf("escreve o maior numero.\n");
			printf("informe quantos numeros serao verificados: ");
			scanf("%i", &numint);
			printf("\no maior numero eh: %f", maiorNum(numint));
		break;
		
		case 3:
			system("cls");
			printf("informa o antecessor e o sucessor de um numero inteiro.\n");
			printf("digite um numero desejado: ");
			scanf("%i", &numint);
			antsuc(numint);
		break;
		
		case 4: 
		system("cls");
		printf("retorna a quantidade de carcter que tem em uma palavra .\n");
		printf("escreva uma palavra de ate 49 cacter: ");
		scanf("%s", &palavra);
		printf("quantidade de caracter: %i", contletra(palavra));
			
			
	}
	
	
}
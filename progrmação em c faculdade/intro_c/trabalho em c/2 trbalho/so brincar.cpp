#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
	char var[20];
	
	printf("escreva um nome: ");
	scanf("%s", &var);
	if(strcmp(var, "ligar1")==2)
		printf("deu certo");
}

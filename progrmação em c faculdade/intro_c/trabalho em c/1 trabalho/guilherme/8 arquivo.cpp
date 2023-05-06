
#include<stdio.h>
#include <stdlib.h>

float altura;

int main(){
	printf("me diga a sua altura para saber se voce pode entra no brinquedo\n");
	scanf("%f", &altura);
	if(altura> 1.6){
		printf("legal, voce ja eh grande o suficiente para poder rodar no brinquedo");
	}else{
		printf("que triste, mas voce anidna nao tem altura. Tente proximo ano");
	}
	return 0;
	
}
/*Guilherme nicollas da silva brito
07279152317
tumar da tarde de sexta de c*/

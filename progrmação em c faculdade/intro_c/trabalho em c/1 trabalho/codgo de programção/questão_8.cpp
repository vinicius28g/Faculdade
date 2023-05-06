
//Aluno: Wallison Fernando Alves da Silva;
//matricula: 202202903388;
#include<stdio.h>
#include <stdlib.h>

float altura;

int main(){
	printf("Digite a sua altura\n");
	scanf("%f", &altura);
	if(altura> 1.6){
		printf("parabens, voce tem altura para ir no brinquedo");
	}else{
		printf("infelismete sua altura nao eh suficiente para ir no brinquedo");
	}
	return 0;
	
}

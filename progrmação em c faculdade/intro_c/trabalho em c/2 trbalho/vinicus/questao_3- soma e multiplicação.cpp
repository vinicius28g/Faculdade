/* VInicius Guimarães dos Santos;
matrícula: 202203022709
retorna a soma e a multiplicação*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	float num;
	setlocale(LC_ALL, "portuguese");
	
	printf("Esse programa retorna a multiplicação e a soma de um número até 0\n");
	printf("Digite um número qualquer: ");
	scanf("%f", &num);
	
	for(int i =num -1; i>= 0 ; i--){
		printf("Soma dos numeros %.2f + %d = %.2f", num, i, num+i);
		printf("\t");
		printf("multiplicação dos numeros %.2f x %d = %.2f\n", num, i, num*i);
	}
	
}


#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	float num;
	
	printf("escreva um numero para que o progrma deja a soma e a multuiplicacao de 1 ate ele:\n");
	scanf("%f", &num);
	printf("a soma dos numeros:\t");  printf("a multiplicacao dos numeros:\n"); 
	for(int i= 1; i<=num; i++){
		printf("%.3f + %d = %.3f\t", num, i, num+i);
		printf("%.3f x %d = %.3f\n", num, i, num*i);
	}
}

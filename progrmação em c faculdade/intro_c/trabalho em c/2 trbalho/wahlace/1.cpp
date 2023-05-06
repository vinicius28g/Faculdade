#include<stdio.h>
#include<stdlib.h>

int main(void){
	double resposta =60 , fatorial;
	int i =1;
	while(resposta< 0 || resposta>50){
		printf("vamos calcular o fatorial de um numero\n");
		printf("informe um neumro qualquer maior que 0 e menor que 50.\n");
		scanf("%lf", &resposta);
	}
	fatorial = resposta;
	while(resposta>resposta -i && resposta>i){
		fatorial = fatorial *(resposta -i);
		i--;
	}
	printf("%.2f! = %.2f", resposta, fatorial);
	
	
}

#include<stdio.h>
#include<stdlib.h>

int main(){
	float number, resposta;
	int i;
	
	printf("ola, o programa recebe um numero qualquer sendo ele <= 50 ou >= 0\n");
	do{
		printf("informe um nuemro: ");
		scanf("%f", &number);
		
		resposta=  number;
		i = number-1;
		
		if(number>50 || number<0)
			printf("intervalo incorreto, tente novamente.");
	}while(number> 50 || number<0);
	
	do{
		resposta = resposta *i;
		i--;
	}while(resposta> i && i>0);
	
	printf("%.3f! = %.3f", number, resposta);
}

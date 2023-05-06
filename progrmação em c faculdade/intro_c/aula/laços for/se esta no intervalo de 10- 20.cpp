#include<stdlib.h>
#include<stdio.h>

int main(){
	float number;
	int intervalo, fora;
	for(int i=1; i<=10; i++){
		printf("digite um numero alquer: ");
		scanf("%f", &number);
		if(number>=10 && number<=20)
			intervalo++;
		else 
			fora++;
	}
	
	printf("a quantidade dentro do intervalo eh: %d \n", intervalo);
	printf("a quantidade fora do intervalor eh: %d \n", fora);
	
	return (0);
}

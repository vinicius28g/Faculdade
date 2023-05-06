#include<stdio.h>
#include<stdlib.h>

int main(){
	float n, i =1;
	
	printf("informe um numero e o programa retornarar a soma e a multiplicacao de 1 ate o numero\n");
	scanf("%f", &n);
	
	while(i<n){
		printf("%.2f + %.0f = %.2f\n", n, i, n+i);
		i++;
	}
	printf("\n");
	i =1;
	while(i<n){
		printf("%.2f * %.0f = %.2f\n", n, i, n*i);
		i++;
	}
}

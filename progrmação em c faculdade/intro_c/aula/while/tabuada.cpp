#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=1;
	float tabuada;
	printf("informe o numero que vc quer a tabuada: ");
	scanf("%f", &tabuada);
	
	while(i<=10){
		printf(" %.0f + %d = %.0f\n", tabuada, i, tabuada + i);
		i++;
	}
	i = 1;
	printf("\n");
	
	while(i<=10){
		printf(" %.0f - %d = %.0f\n", tabuada, i, tabuada - i);
		i++;
	}
	i = 1;
	printf("\n");
	
	while(i<=10){
		printf(" %.0f x %d = %.0f\n", tabuada, i, tabuada * i);
		i++;
	}
	i = 1;
	printf("\n");
	
	while(i<=10){
		printf(" %.0f / %d = %.1f\n", tabuada, i, tabuada / i);
		i++;
	}
}

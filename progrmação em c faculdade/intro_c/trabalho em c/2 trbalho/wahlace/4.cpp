#include<stdio.h>
#include<stdlib.h>


int main(){
	float numero[2][5];
	int i =1;
	printf("digite um numero e o progrma retornarar o quadrado do numero\n");
	for(int l =0; l<2; l++){
		for(int c =0; c<5; c++){
			printf("informe o numero %d:", i);
			scanf("%f", &numero[l][c]);
			i++;
		}
	}
	
	printf("\n")
	for(int l =0; l<2; l++){
		for(int c =0; c<5; c++){
			printf("o quadrado do numero %d: %.2f\n", i, numero[l][c] * numero[l][c]);
		}
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	float vet[10];
	int i= 0;
	
	printf("escreva 10 numeros para que retorne o quadrado dele");
	printf("\n");
	do{
		scanf("%f", &vet[i]);
		i++;
	}while(i<10);
	
	i=0;
	do{
		printf("o quadrado do numero %.3f: %.3f\n", vet[i], pow(vet[i], 2));
		i++;
	}while(i<10);
}

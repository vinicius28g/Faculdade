/* Vinicius Guimarães dos Santos;
matrícula: 202203022709
retorna a soma e a multiplicação*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include <math.h>

int main(){
	float valores [10];
	
	for(int i=0; i<10; i++){
		printf("informe o valor %d: ", i+1);
		scanf("%f", &valores[i]);
	}
	printf("\n");
	for(int i=0; i<10; i++){
		printf("o quadrado de %.2f = %.2f\n", valores[i], pow(valores[i],2));
	}
}

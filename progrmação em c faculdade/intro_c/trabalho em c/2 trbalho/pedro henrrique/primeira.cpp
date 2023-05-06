// número fatorial 

#include <stdlib.h>
#include<stdio.h>

int main(void){
	float n1, falta_fatorar;
	
	printf("numero fatorial, digite um numero: \n");
	scanf("%f", &falta_fatorar);
	n1= falta_fatorar;
	
	for(int i = falta_fatorar -1; i>1; i--)
		falta_fatorar = falta_fatorar *i;  
	printf("%f! = %f", n1, falta_fatorar);
	
}

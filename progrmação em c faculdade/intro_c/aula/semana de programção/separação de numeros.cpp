//lendo 5 valores e falando qual é par, impar, positivo, negativo

#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor;
	int pares = 0, impares = 0, positivos = 0, negativos = 0;
	
	printf("digite 5 valores quaisquer:\n");
	for(int i=1; i<=5; i++){
		scanf("%d", &valor);
		
		if(valor % 2 == 0){
			pares++;
		}else{
			impares++;
		}
			
		if(valor>0){
			positivos++;
		}else{
			if(valor<0)
				negativos++;
		}	
		
	}
	
	printf("%d valor (es) par (es)\n", pares);
	printf("%d valor (es) impar (es)\n", impares);
	printf("%d valor (es) positivo (s)\n", positivos);
	printf("%d valor (es) negativos (s)\n", negativos);
	return 0;
}

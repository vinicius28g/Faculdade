#include <stdlib.h>
#include <stdio.h>

// tabuada de um valor até 10

int main(){
	int tabuada;
	printf("digite um numero de 1 a 10 que vc quer a tabuada\n");
	scanf("%d", &tabuada);
	if(tabuada >=1 && tabuada <= 10){
		for(int i=1; i<=10; i++){
			printf("%d + %d = %d\n", tabuada, i, tabuada + i);
		}
		printf("\n");
		
		for(int i=1; i<=10; i++){
			printf("%d - %d = %d\n", tabuada, i, tabuada - i);
		}
		printf("\n");
		
		for(int i=1; i<=10; i++){
			printf("%d x %d = %d\n", tabuada, i, tabuada * i);
		}
		printf("\n");
		
		for(int i=1; i<=10; i++){
			printf("%d / %d = %d\n", tabuada, i, tabuada / i);
		}
		
	}else{
		printf("numero invalido, pfvr informe outro ou finalize o programa");
		
	}
	
}

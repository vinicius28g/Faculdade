#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	int opcao;
	
	do{
		printf("digite 1 pra foda e 2 foda-se: ");
		scanf("%d", &opcao);
	}while(opcao!= 1 && opcao!= 2);
	
	if(opcao == 1){
		printf("sua opoção foi: %d ", opcao);
		printf("foda");
	}
	if(opcao == 2){
		printf("sua opoção foi: %d ", opcao);
		printf("foda-se");
	}
	
}

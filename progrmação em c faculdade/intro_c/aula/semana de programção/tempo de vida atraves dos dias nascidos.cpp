// conta a idade de uma pessoa apenas com a qnt de dias
#include <stdio.h>
int main(){
	int dia_nascido, anos, meses;
	
	printf("informe a quantidade de dias que voce nasceu\n");
	scanf("%d", &dia_nascido);
	
	while(dia_nascido>365){
		dia_nascido -= 365;
		anos++;
	}
	while(dia_nascido>30){
		dia_nascido -= 30;
		meses++;
	}
	 printf("%d anos\n", anos);
	 printf("%d meses\n", meses);
	 printf("%d dias\n", dia_nascido);
	
}


//Aluno: Wallison Fernando Alves da Silva;
//matricula: 202202903388;


#include<stdio.h>
#include <stdlib.h>

int escolha;
 
int main(){
	printf("digite qual numeor corrsponde a sua arma\n");
	printf("1- rifle\n");
	printf("2- pistola\n");
	printf("3- faca\n");
	scanf("%d", &escolha);
	
	if(escolha ==1 || escolha ==2)
		printf("voce eta liberado para atirar");
	else
		printf("voce so pode esfaquear o seu oponente");
	return 0;
	
}

/*Vinicius Guimarães dos Santos;
matrícula: 202203022709;
questão 1: número fatorial;*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
		char comando [10];
		double num, fatorado;
		
		do{
			printf("olá esse programa informa a fatoraçõa de um número.\n"
		"OBS: caso o número que você queira for decimal coloque com virgula ex: 2,4.\n");
		do{
			printf("digite um número pertercente ao intervalo 0 <= a <= 50: ");
			scanf("%lf", &fatorado);
			if(fatorado<0 || fatorado>50){
				system("cls");
				printf("intervalo incorreto tente nomanete.\n");
			}		
		}while(fatorado<0 || fatorado>50);
		// coloquei o do while por caso o usuário colocar um número fora do intervalo o codigo não rodar
		
		for(int i =fatorado - 1; i>1; i--){
			fatorado *= i;
		}
		printf("%.2lf! = %.2lf\n",num, fatorado );
		printf("gigite qualquer coisa para continuar ou escreva \"SAIR\"");
		scanf("%s", &comando);
		system("cls");
		}while(strcmp(comando, "SAIR") != 0);
		//se a strcmp retornar 0, ou seja, o usrário digitar SAIR a condição do while vai ser falsa.
		system("cls");
}

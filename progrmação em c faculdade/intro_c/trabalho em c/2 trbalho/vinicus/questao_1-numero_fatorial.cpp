/*Vinicius Guimar�es dos Santos;
matr�cula: 202203022709;
quest�o 1: n�mero fatorial;*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	
		char comando [10];
		double num, fatorado;
		
		do{
			printf("ol� esse programa informa a fatora��a de um n�mero.\n"
		"OBS: caso o n�mero que voc� queira for decimal coloque com virgula ex: 2,4.\n");
		do{
			printf("digite um n�mero pertercente ao intervalo 0 <= a <= 50: ");
			scanf("%lf", &fatorado);
			if(fatorado<0 || fatorado>50){
				system("cls");
				printf("intervalo incorreto tente nomanete.\n");
			}		
		}while(fatorado<0 || fatorado>50);
		// coloquei o do while por caso o usu�rio colocar um n�mero fora do intervalo o codigo n�o rodar
		
		for(int i =fatorado - 1; i>1; i--){
			fatorado *= i;
		}
		printf("%.2lf! = %.2lf\n",num, fatorado );
		printf("gigite qualquer coisa para continuar ou escreva \"SAIR\"");
		scanf("%s", &comando);
		system("cls");
		}while(strcmp(comando, "SAIR") != 0);
		//se a strcmp retornar 0, ou seja, o usr�rio digitar SAIR a condi��o do while vai ser falsa.
		system("cls");
}

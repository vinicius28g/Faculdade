/* Vinicius Guimar�es dos Santos;
matr�cula: 202203022709
velocidade m�dia*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>


int main(){
	int op;
	double velocidade =0, tempo=0, distancia =0;
	setlocale(LC_ALL, "PORTUGUESE");
	
		inicio:
	printf("vamos fazer alguns calculos.\n"
		"escolha oq voc� vai querer calcular.\n"
		"1- calcular velocidade.\n"
		"2- calcular dist�ncia.\n"
		"3- calcular tempo.\n"
		"4- sair\n");
	scanf("%d", &op);
	
	switch (op){
		case 1:
			system("cls");
			printf("calclular a velociade\n");
			printf("digite a dist�ncia em METROS: ");
			scanf("%lf", &distancia);
			printf("digite o tempo em SEGUNDOS: ");
			scanf("%lf", &tempo);
			printf("a velocidade �: %.2lf km/h\n", (distancia /tempo)* 3.6);
			system("pause");
			system("cls");
			goto inicio;
		case 2: 
			system("cls");
			printf("calcular a dist�ncia\n");
			printf("digite o tempo em SEGUNDO: ");
			scanf("%lf", &tempo);
			printf("digite a velocidade em Km/h: ");
			scanf("%lf", &velocidade);
			printf("a distancia �: %.2lf m\n", (velocidade / 3.6)*tempo);
			system("pause");
			system("cls");
			goto inicio;
		case 3:
			system("cls");
			printf("calcular o tempo\n");
			printf("digite a dist�ncia em METROS: ");
			scanf("%lf", &distancia);
			printf("digite a velocidade em Km/h: ");
			scanf("%lf", &velocidade);
			printf("o tempo foi: %.2lf s\n", distancia/(velocidade/3.6));
			system("pause");
			system("cls");
			goto inicio;
		case 4:
			return 0;
	}
}


#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

float distancia, tempo, velocidade;

int calcular_velocidade(void){
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("distância (m): ");
	scanf("%f", &distancia);
	printf("tempo (s): ");
	scanf("%f", &tempo);
	printf("velocidade : %.2f (km/h)\n", (distancia /tempo)* 3.6);

}

int calcular_distancia(void){
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("tempo (s): ");
	scanf("%f", &tempo);
	printf("velocidade (km/h): ");
	scanf("%f", &velocidade);
	printf("a distância é: %.2f m\n", (velocidade / 3.6)*tempo);
}

int calclular_tempo(void){
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("distância (m): ");
	scanf("%f", &distancia);
	printf("velocidade (km/h): ");
	scanf("%f", &velocidade);
	printf("tempo foi: %.2f s\n", distancia/(velocidade/3.6));
}

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int selecao;
	
	printf("escolha oq você vai querer calcular.\n");
	printf("1- calcular velocidade.\n");
	printf("2- calcular distância.\n");
	printf("3- calcular tempo.\n");
	scanf("%d", &selecao);
	
	switch (selecao){
		case 1:
			calcular_velocidade();
			break;
		case 2: 
			calcular_distancia();
			break;
		case 3:
			calclular_tempo();
			break;
		case 4:
			return 0;
	}
}

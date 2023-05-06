#include<stdlib.h>
#include<stdio.h>

int main(void){
	int alternativa;
	float vet[3];
	
	do{
		printf("\nescolha um opcao:\n");
		printf("1: calcular velocidade\n");
		printf("2: calcular distancia\n");
		printf("3: calcular tempo\n");
		printf("4: 'S A I R'\n");
		scanf("%d", &alternativa);
		
		switch(alternativa){
			case 1:
				printf("escreva a distancia m: \t escreva o tempo s\n"); 
				scanf("%f", &vet[0]); printf("\t \t \t \t");
				scanf("%f", &vet[1]);
				printf("sua velocidade eh: %.3f km/h\n", (vet[0]/vet[1])*3.6);
				system("pause");
				system("cls");
				break;
			case 2:
				printf("escreva a valocidade km/h: \t escreva o tempo s\n"); 
				scanf("%f", &vet[0]); printf("\t \t \t \t \t");
				scanf("%f", &vet[1]);
				printf("sua distancia eh: %.3f m\n", (vet[0]/3.6)*vet[1]);
				system("pause");
				system("cls");
				break;
			case 3:
				printf("escreva a distancia m: \t escreva a valocidade km/h\n"); 
				scanf("%f", &vet[0]); printf("\t \t \t \t \t");
				scanf("%f", &vet[1]);
				printf("seu tempo foi: %.3f s\n", vet[0]/(vet[1]/3.6));
				system("pause");
				system("cls");
				
		}
	}while(alternativa != 4);
	
}

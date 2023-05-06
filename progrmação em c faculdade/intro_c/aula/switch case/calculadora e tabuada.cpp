// calculadora
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


float soma (int n1, float n2){
	float resultado;
	resultado = n1+n2;
	return (resultado);
}


int main(){
	
	int op =1, flag =1, qnt;
	float tabuada;
	char comando[10], operacao [3];
	int i; //condção para usar no for
	float aux = 0; // ajuda nas operações 
	
	setlocale(LC_ALL, "portuguese");
	
	while(op>0){
		printf("\n");
		printf("qual função você deseja? \n");
		printf("1- tabuada de um nemro desejado\n");
		printf("2- calculadora\n");
		scanf("%d", &op);
		system("cls");
	
		
		switch (op){
			case 1:
				do{
					printf("informe qual numero vc quer a tabuada.\n");
					printf("OBS: se for numero decimal utilise virgula e n ponto Ex: 1,2\n");
					printf("digite a tabuada desejada: ");
					scanf("%f", &tabuada);
					printf("\n");
				
					for(int i=1; i<=10; i++)
						printf("%d + %.3f = %.3f \t %d - %.3f = %.3f \n", i, tabuada,soma(i,tabuada), i, tabuada,i-tabuada);
						printf("\n \n");
					for(int i=1; i<=10; i++)
						printf("%d x %.3f = %.3f \t %d / %.3f = %.3f \n", i, tabuada,i*tabuada, i, tabuada,i/tabuada);
					printf("\n");
					printf("digite uma tecla e der enter para continua ou digite \"SAIR\" ");// o \"SAIR\" é para exibir algo entre aspas
					scanf("%s", &comando);
					
				}while(strcmp(comando, "SAIR") != 0);
				system("cls");
				break;
			case 2:
				printf("digite a quantidade de elementos que você quer calcular: ");
						scanf("%d", &qnt);
						float elementos [qnt];
						printf("digite os números para serem calculados:\n");
						for(i = 0; i< qnt; i++){
							inicio_2:
							scanf("%f", &elementos[i]);
							if(flag ==1){
								aux= elementos[0];
								flag=0;
								goto inicio_2;
								}
							scanf("%c", &operacao);

							if( strcmp(operacao, "+")==0){
								aux+= elementos[i];
							}
							if( strcmp(operacao, "-")==0){
								aux-= elementos[i];
							}
							if( strcmp(operacao, "x")==0){
								aux*= elementos[i];
							}
							if( strcmp(operacao, "/")==0){
								aux/= elementos[i];
							}
						}
						printf("O resultado da conta é: %f", aux);
						system("cls");
						break;
		}
	}
	return 0;
}

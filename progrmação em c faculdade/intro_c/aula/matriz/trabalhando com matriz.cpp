#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int n= 3; // ordem da matriz
	int matriz [n][n];
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	int op;
	
	printf("escolha uma opção\n");
	printf("1- tipo de matriz\n"
	       "2- diaconal principal e secundadria\n"
		   "0- voltar\n");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			menu2:
			system("cls");
			printf("escolha uma matriz:\n"
					"1- matriz endentidde\n"
					"2- matriz linha\n"
					"3- matriz oposta\n"
					"4- matriz coluna\n"
					"5- matriz transposta\n"
					"0 - voltar\n");
			scanf("%i", &op);
			switch(op){
				case 1:
					system("cls");
					
				/*	for(int i= 0; i<n ;i++ ){
						for(int j=0; j<n ;j++ ){
							linha= rand() %100;
							coluna= rand() %100;
							matriz[i][j]= linha, coluna;
						}	
					}*/

					printf("matriz endentidade\n");
					
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<n ;j++ ){
							if ((i == j) && (matriz[i][j] != 1))
								matriz[i][j]= 1,1;
							if (i != j)
								matriz[i][j]= 0,0;
							printf("%i |", matriz[i][j]);
						}
						printf("\n");
					}
					printf("digete 0 para voltar ou 1 para encerrar: ");
					scanf("%i", &op);	
					if(op==0)
						goto menu2;
					
				break;
				
				case 2:
					system("cls");
					printf("matriz linha\n");
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<1 ;j++ ){
							printf("%i |", matriz[i][j]);
						}	
					}
					printf("\ndigete 0 para voltar ou 1 para encerrar: ");
					scanf("%i", &op);	
					if(op==0)
						goto menu2;
				break;
				
				case 3:
					system("cls");
					printf("\t\t matriz oposta\n\n");
					printf("matriz normal\n");
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<n ;j++ ){
							matriz[i][j]= rand() %100, rand() %100;
							printf("%i |", matriz[i][j]);
						}
						printf("\n");
					}
					printf("\n matriz oposta\n");
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<n ;j++ ){
							matriz [i][j]= matriz [i][j] *-1;
							printf("%i |", matriz[i][j]);
						}
						printf("\n");	
					}
					printf("digete 0 para voltar ou 1 para encerrar: ");
					scanf("%i", &op);	
					if(op==0)
						goto menu2;
				break;
				case 4:
					system("cls");
					printf("matriz linha\n");
					for(int i= 0; i<1 ;i++ ){
						for(int j=0; j<n ;j++ ){
							printf("%i |", matriz[i][j]);
						}	
					}
					printf("\ndigete 0 para voltar ou 1 para encerrar: ");
					scanf("%i", &op);	
					if(op==0)
						goto menu2;
				break;	
				case 5:
					system("cls");
					printf("\t\t matriz tranposta\n\n");
					printf("matriz normal\n");
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<2 ;j++ ){
							matriz[i][j]= rand() %100, rand() %100;
							printf("%i |", matriz[i][j]);
						}
						printf("\n");
					}
					printf("matriz oposta\n");
					for(int i= 0; i<n ;i++ ){
						for(int j=0; j<2 ;j++ ){
							matriz[i][j]= matriz[j][i];
							printf("%i |", matriz[i][j]);
							
						}
						printf("\n");
					}
				break;
			}
			
	} 
	
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int linha, coluna, tam;
main(){
	printf("\n\n\n");
	printf(" informe o tamanho do matro da cruz: ");
	scanf("%i", &tam);
	//printf("\n           ");
	for(linha=0; linha<tam; linha++){
		for(coluna=0; coluna<10; coluna++){
			if(linha==4 || coluna == tam/2){
				printf("\xDB\xDB");
				system("color b");
			}else{
				printf(" ");
			}
		}
		printf("\n            ");
	}
	
}
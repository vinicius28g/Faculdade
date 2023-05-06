#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include <windows.h>


void obtusagulo(int altura){
	printf("\t");
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf("  ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
 
			//system("color b");
			printf("*");
		}
		printf("\n");
		printf("\t");
	}
}
// dividir as figuras em partes de cima e de baixo.
void lozangulo(int altura){
	printf("\t");
	int contador= 0;
    // parte de cima 
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
 
			//system("color b");
			printf("**");
		}
		
		printf("\n\t");
	}
	// parte de baixo
	for(int i =1; i<= altura; i++){ 
	
		for(int a =0; a< contador; a++){
			printf(" ");
		}
	
		contador++; // auxuilia a dar o espaço na parte de baixo das figuras.
		for(int j = altura; j>=i;j--){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // mudar a cor so dessa parte do texto.
 
			//system("color b");
			printf("**");
		}
		printf("\n");
		printf("\t");
	}
}

void exagono(int lado){
	int contador =0;
	printf("\n");
	printf("\t");
	//parti de cima.
	for(int i =0; i<lado; i++){
		
		for(int j = lado-i; j>=1; j--){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // mudar a cor so dessa parte do texto.
			printf(" ");
		}
				
		for( int c =0; c < lado +i; c++){
			printf("*");
		}
		
		for( int c =0; c < lado +i; c++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // mudar a cor so dessa parte do texto.
			printf("*");
		}
		
		printf("\n");
		printf("\t");
	}
	//parte de baixo.
	for(int i =0; i<lado; i++){
		for(int a =0; a< contador; a++){
			printf(" ");
		}
		contador++; // auxuilia a dar o espaço na parte de baixo das figuras.
		for( int c =lado *2; c > 0 +i; c--){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
			printf("*");
		}
		for( int c =lado *2; c > 0 +i; c--){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
			printf("*");
		}
		printf("\n");
		printf("\t");	
	}
}

int cores(){
	
	char tipCores [9][25]= {"Azul escuro", "Verde escuro", "Azul claro", "Vermelho","Roxo", "laranja","branco" , "Ciza"};
	printf("\t\tESCOLHA UMA COR\t\n\n");
	int cor;
	// informa um menu de cor de 8 cores.
	for(int i =0; i<4; i++){  // coloquei o i<4 para poder fazer uma tabela com as cores
		printf("| %i- %s ", i+1, tipCores [i]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i+1);
		printf("\t\xDB\xDB\t");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		// parte do lado esquerdo da tabela.
		//-------------------------------------------------------------
		printf("| %i- %s ", i+5, tipCores [i+4]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i+5);
		printf("\t\xDB\xDB\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);	
	}
	erro_cor: // ancora de erro
	printf("digite o numero de uma cor: ");
	scanf("%i", &cor);
	if(cor<1 || cor>8){
		printf("opcao incorrete. Tente novamente.\n");
		goto erro_cor; // goto leva a execução do codigo pra onde tem o nome erro_cor.
	}
	return (cor);
}
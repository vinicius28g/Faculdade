#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include <string.h>

/* Vinicius Guimarães dos Santos; 
matricula: 202203022709
Victhor Gabriel Bandeira Barros da Costa;
matricula: 202203172603
software basico em c- tumar de quinta- tarde;*/

int i, j;

void piramide(int altura, int cor){
	printf("\t");
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
			printf("**");
		}
		printf("\n");
		printf("\t");
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void obtusagulo(int altura, int cor){
	printf("\t");
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf("  ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
 
			//system("color b");
			printf("*");
		}
		printf("\n");
		printf("\t");
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
// dividir as figuras em partes de cima e de baixo.
void lozangulo(int altura, int cor){
	printf("\t");
	int contador= 0;
    // parte de cima 
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
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
			printf("**");
		}
		printf("\n");
		printf("\t");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void exagono(int lado, int cor){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
	int contador =0;
	printf("\n");
	printf("\t");
	//parti de cima.
	for(int i =0; i<lado; i++){
		
		for(int j = lado-i; j>=1; j--){
			printf(" ");
		}
				
		for( int c =0; c < lado +i; c++){
			printf("*");
		}
		
		for( int c =0; c < lado +i; c++){
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
			printf("*");
		}
		for( int c =lado *2; c > 0 +i; c--){
			printf("*");
		}
		printf("\n");
		printf("\t");	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void trapezioRet(int altura, int cor)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
	printf("\t");
	for(i = 1; i <= altura; i++)
	{
		for(j = altura + i; j >= 1 ; j--){
			printf("*");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n\t");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void trianguloRet(int altura, int cor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
	printf("\t*\n\t");
	for(i = 0; i <= altura; i++)
	{
		printf("**");
		for(j = 1; j <= i ; j++)
		{
			printf("**");
	    }
		printf("\n\t");   	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int cores(){
	
	char tipCores [9][25]= {"Azul escuro", "Verde escuro", "Azul claro", "Vermelho","Roxo", "laranja","branco" , "Ciza"};
	printf("\t\tESCOLHA UMA COR \t\n\n");
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

int menuFormas(){
	int altura = 3;
	int contador2 = 0; // tive que criar um outro contador para n atrapalhar o desenho da outra figura.
	int contador = 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("|=========================================|\n");
	printf("|               MENU DE FORMAS            |\n");
	printf("|=========================================|\n");
	printf("|1- PIRAMIDE \t |2- OBTUSANGULO\n\n ");
	// desenhando a primanide e o obtusangulo.
	printf("\t");
	for(int i =1; i<= altura; i++){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		for(int j =1; j<=i;j++){
			//system("color b");
			printf("**");	
		}
		printf("\t\t");
		// desenho obtusalgulo
		for(int j = altura-i; j>=1; j--){
			printf("  ");
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		for(int j =1; j<=i;j++){
			
			//system("color b");
			printf("*");
		}
		printf("\n");
		printf("\t");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("\n");
	printf("|3- LOZANGULO \t |4- EXGONO \n\n");
	printf("\t");
	// DESENHO LOZANGULO e do exagono 
	for(int i =1; i<= altura; i++){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		
		for(int j =1; j<=i;j++){
			printf("**");
		}
		// exagono parte de cima
		printf("\t\t");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); 
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
				
		for( int c =0; c < altura +i; c++){
			printf("*");
		}
		
		for( int c =0; c < altura +i; c++){
			printf("*");
		}
		
		printf("\n\t");
	}
	
	for(int i =1; i<= altura; i++){ 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		for(int a =0; a< contador; a++){
			printf(" ");
		}
		contador++;
		for(int j = altura; j>=i;j--){
			printf("**");
		}
		printf("\t\t");
		// parte de baixo do exagono.
	
		for(int a =0; a< contador; a++){
			printf(" ");
		}
		contador2++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		for( int c = altura *2; c > i; c--){
			printf("*");
		}
		for( int c = altura *2; c > i; c--){
			printf("*");
		}
		printf("\n");
		printf("\t");	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("\n");
	printf("|5- TRIANGULO RETANGULO\t |6- TRAPEZIO \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("\t*\n\t");
	// DESENHO DO TRIANGULO RETANGULO E DO TRAPEZIO 
	for(i = 0; i <= altura; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("**");
		for(j = 1; j <= i ; j++)
		{
			printf("**");
	    } 
		// desenho do trapezio
	    
	    if(i== altura){
	    	printf("\t");
		}else{
			printf("\t\t");
		}
		
	    for(j = altura + i; j >= 1 ; j--){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
			printf("*");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n\t");   	
	}
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("\n\n");
	return(0);
	
}

int salvArqui(int figura, int altura, char arquivo[30]){
	int contador =0;
	int r; // variavel de erro.
	// a figura sera em switch case de acordo com o menu;
	
	FILE *pont_arq;
	pont_arq = fopen(arquivo,"a");
	if (pont_arq == NULL)
   {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);
   }
	
	switch(figura){
		// primamide 
		case 1:
			fputs("\t", pont_arq);
			printf("\t");
			for(int i =1; i<= altura; i++){
				for(int j = altura-i; j>=1; j--){
					//printf(" ");
					r= fputs(" ", pont_arq);
				}
				for(int j =1; j<=i;j++){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
					fputs("**", pont_arq);
				//	printf("**");
				}
				fputs("\n\t", pont_arq);
			//	printf("\n\t");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
		
		// obtusangolo
		case 2:
			fputs("\t", pont_arq);
			//printf("\t");
			for(int i =1; i<= altura; i++){
				for(int j = altura-i; j>=1; j--){
					 r=fputs("  ", pont_arq);
				//	printf("  ");
				}
		
				for(int j =1; j<=i;j++){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					//system("color b");
					fputs("*", pont_arq);
				//	printf("**");
				}
				fputs("\n\t", pont_arq);
				//printf("\n\t");
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
		// lozangulo
		case 3:
			fputs("\t", pont_arq);
			//printf("\t");
    		// parte de cima 
			for(int i =1; i<= altura; i++){
				for(int j = altura-i; j>=1; j--){
				r= 	fputs(" ", pont_arq);
				//	printf(" ");
				}
		
				for(int j =1; j<=i;j++){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					fputs("**", pont_arq);
				//	printf("**");
				}
				fputs("\n\t", pont_arq);
			//	printf("\n\t");
			}
			// parte de baixo
			for(int i =1; i<= altura; i++){ 
	
				for(int a =0; a< contador; a++){
					fputs(" ", pont_arq);
				//	printf(" ");
				}
	
				contador++; // auxuilia a dar o espaço na parte de baixo das figuras.
				for(int j = altura; j>=i;j--){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // mudar a cor so dessa parte do texto.
					fputs("**", pont_arq);
					//printf("**");
				}
				fputs("\n\t", pont_arq);		
				//printf("\n\t");
			}
			contador =0;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
		// exagono
		case 4:
		//	printf("\n\t");
			fputs("\n\t", pont_arq);
			//parti de cima.
			for(int i =0; i<altura; i++){
				
				for(int j = altura-i; j>=1; j--){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // mudar a cor so dessa parte do texto.
				//	printf(" ");
					r=fputs(" ", pont_arq);
				}
						
				for( int c =0; c < altura +i; c++){
				//	printf("*");
					fputs("*", pont_arq);
				}
				
				for( int c =0; c < altura +i; c++){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6); // mudar a cor so dessa parte do texto.
				//	printf("*");
					fputs("*", pont_arq);
				}
				
			//	printf("\n \t");
				fputs("\n\t", pont_arq);
			}
			//parte de baixo.
			for(int i =0; i<altura; i++){
				for(int a =0; a< contador; a++){
				//	printf(" ");
					fputs(" ", pont_arq);
				}
				contador++; // auxuilia a dar o espaço na parte de baixo das figuras.
				for( int c =altura *2; c > 0 +i; c--){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
				//	printf("*");
					fputs("*", pont_arq);
				}
				for( int c =altura *2; c > 0 +i; c--){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
				//	printf("*");
					r=fputs("*", pont_arq);
				}
			//	printf("\n\t");
				fputs("\n\t", pont_arq);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
		//triangulo retangulo
		case 5:
			//printf("\t*\n\t");
			fputs("\n\t*\n\t", pont_arq);
			for(i = 0; i <= altura; i++)
			{
				//printf("**");
				fputs("**", pont_arq);
				for(j = 1; j <= i ; j++)
				{
					//printf("**");
					fputs("**", pont_arq);
			    }
				//printf("\n\t");  
				fputs("\n\t", pont_arq); 	
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
		//trapezio
		case 6:
		//	printf("\n\t");
			fputs("\n\t", pont_arq);
			for(i = 1; i <= altura; i++)
			{
				for(j = altura + i; j >= 1 ; j--){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				//	printf("*");
				r=	fputs("*", pont_arq);
				}
				for(j = 1; j <= i; j++){
				//	printf("*");
					fputs("*", pont_arq);
				}
			//	printf("\n\t");
				fputs("\n\t", pont_arq);
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		break;
			
	}
	
	if( r == EOF)
   			{
       			printf("Erro ao tentar gravar os dados! \n");
  			}else
     		{
     			printf("seu arquivo eh: %s \n", arquivo);
       			printf("Dados gravados com sucesso. \n");
     		}
     		fputs("\n\n", pont_arq);
     		fclose(pont_arq);
	return(0);
}
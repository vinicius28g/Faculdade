#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include <windows.h>

void piramide(){
	int altura; 
	
	printf("digite a altura do triangulo: ");
	scanf("%d", &altura);
	
	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
 
			//system("color b");
			printf("**");
		}
		printf("\n");
	}
	
	
}

void obtusagulo(){
	int altura; 
	
	printf("digite a altura do triangulo: ");
	scanf("%d", &altura);
	
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
	}
}

void lozangulo(){
	int altura; 
	int contador= 0;
	
	printf("digite a altura do triangulo: ");
	scanf("%d", &altura);
	printf("\n");

	for(int i =1; i<= altura; i++){
		for(int j = altura-i; j>=1; j--){
			printf(" ");
		}
		
		for(int j =1; j<=i;j++){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
 
			//system("color b");
			printf("**");
		}
		printf("\n");
	}
	
	for(int i =1; i<= altura; i++){ 
	
		for(int a =0; a< contador; a++){
			printf(" ");
		}
	
		contador++;
		for(int j = altura; j>=i;j--){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // mudar a cor so dessa parte do texto.
 
			//system("color b");
			printf("**");
		}
		printf("\n");
	
	}
	
}

void pentagono(){
	int lado;
	int contador =0;
	printf("informe o lado do pentagono: ");
	scanf("%d", &lado);
	printf("\n");
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
	}
	
	for(int i =0; i<lado; i++){
		for(int a =0; a< contador; a++){
			printf(" ");
		}
		contador++;
		for( int c =lado *2; c > 0 +i; c--){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
			printf("*");
		}
		for( int c =lado *2; c > 0 +i; c--){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); // mudar a cor so dessa parte do texto.
			printf("*");
		}
		printf("\n");	
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1); // mudar a cor so dessa parte do texto.
}
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void trapezio(int base_maior, int base_menor, int altura){
	for(int i=0; i<base_menor; i++){
		printf("-");
	}
	for(int i=0; i<altura; i++){
		printf("|");
		for(int espaco =0; espaco<base_menor; espaco++){
			printf(" ");
		}
		printf("\\");
	}
	for(int i=0; i<base_maior; i++){
		printf("-");
	}
	
}
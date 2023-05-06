#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void trapezio(int base_menor, int base_maior, int altura){
	printf("|");
	for(int i; i<base_menor; i++){
		printf("-");
	}
	printf("\n");
	for(int i; i<altura; i++){
		printf("|");
		for(int espaco =0; espaco<base_menor;espaco++){
			printf(" ");	
		}
		if(i>1){
			printf(" ");
		}
		printf("\\");
	}
	for(int i; i<base_maior; i++){
		printf("-");
	}
	
}

int main(){
	trapezio(15,20,15);
}
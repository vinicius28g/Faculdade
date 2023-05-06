#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int linha, coluna;
main(){
	
	for(linha=0; linha<16; linha++){
		for(coluna=0; coluna<32; coluna++){
			printf("\xDB");
		}
		printf("\xDB");
		printf("\xDB\n");
	}
	printf("\n\n\n");
}
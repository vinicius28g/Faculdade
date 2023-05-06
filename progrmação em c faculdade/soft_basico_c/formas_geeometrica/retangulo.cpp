#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int linha, coluna;
main(){
	system("color b");
	for(linha=0; linha<16; linha++){
		for(coluna=0; coluna<100; coluna++){
			printf("\xDB");
		}
		printf("\xDB");
		printf("\xDB\n");
	}
	printf("\n\n\n");
}
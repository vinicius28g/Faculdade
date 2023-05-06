
//Aluno: Wallison Fernando Alves da Silva;
//matricula: 202202903388;
#include<stdio.h>
#include <stdlib.h>
float compra1,compra2,compra3;
char produto1[20], produto2[20], produto3[20];
int main(){
	printf("digite o nome de um produto, logo em seguida deh enter e informe o valor\n");
	scanf("%s", &produto1);
	scanf(" %f", &compra1);
	printf("digite o nome de um produto, logo em seguida deh enter e informe o valor\n");
	scanf("%s", &produto2);
	scanf(" %f", &compra2);
	printf("digite o nome de um produto, logo em seguida deh enter e informe o valor\n");
	scanf("%s", &produto3);
	scanf(" %f", &compra3);
	printf("\n\n");
	
	if(compra1<compra2 && compra1<compra3)
	printf("O (a) %s custa %.2f e eh mais barato",produto1,compra1);
	else{
		if(compra2<compra3 && compra2<compra1 ){
			printf("O (a) %s custa %.2f e eh mais barato",produto2,compra2);
		}else{
			if(compra3<compra1 && compra3<compra2)
				printf("O (a) %s custa %.2f e eh mais barato",produto3,compra3);
		}
	}
	return 0;
}


/*mostra o produto mais barato;
Aluno: Vinicius Guimarães dos Santos;
matricula: 202203022709;
ciências da coputação 1º periodo;*/

#include<stdio.h>
#include <stdlib.h>


float v1,v2,v3;
char p1[20], p2[20], p3[20];
 
int main(){
	printf("vamos montar uma tabela de preços com 3 itens!!\n");
	printf("ensira o nome e o preco do primeiro produto, separado por ENTER\n");
	scanf("%s %f", &p1, &v1);
	printf("ensira o nome e o preço do segundo produto, separado por ENTER\n");
	scanf("%s %f", &p2, &v2);
	printf("ensira o nome e o preço do terceiro produto, separado por ENTER\n");
	scanf("%s %f", &p3, &v3);
	printf("=================================================================================\n\n");
	
	if(v1==v2 && v2==v3 && v1==v2){
	printf("os produtos tem o mesmo prco");
	return 0;
	}
	if(v1<v2 && v1<v3)
	printf("O produto %s que custa %.2f eh mais barato",p1,v1);
	else{
		if(v2<v3 && v2<v1 ){
			printf("O produto %s que custa %.2f eh mais barato",p2,v2);
		}else{
			if(v3<v1 && v3<v2)
			printf("O produto %s que custa %.2f eh mais barato",p3,v3);
		}
	}
	return 0;
}


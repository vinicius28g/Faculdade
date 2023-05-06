/*calcula o salario final de vendedores e informa qual é o maior;
Aluno: Vinicius Guimarães dos Santos;
matricula: 202203022709;
ciências da coputação 1º periodo;*/

#include<stdio.h>
#include<stdlib.h>

char vendedor1[30], vendedor2[30], vendedor3[30];
float venda[3], salario[3];

int main(){
	printf("vamos calcular o salario final de vendedores e saber quem ganhou mais\n");
	printf("ensira o nome de 3 vendedores separados por ENTER\n");
	scanf("%s %s %s",&vendedor1, &vendedor2, &vendedor3);
	printf("ensira a venda dos 3 vendedores respectivamente separados por ENTER\n");
	for(int i=0; i<3;i++){
		scanf("%f", &venda[i]);
		salario[i]= 1100+ venda[i]*15/100;
	}
	
	if(salario[0]> salario[1] && salario[0]> salario[2])
		printf("o vendedor %s tem o maior salario que eh de: %.2f", vendedor1, salario[0]);
	else
		if (salario[1]> salario[2] && salario[1]> salario[0])
			printf("o vendedor %s tem o maior salario que eh de: %.2f", vendedor2, salario[1]);
	    else
	    	if(salario[2]> salario[1] && salario[2]> salario[0])
	    		printf("o vendedor %s tem o maior salario que eh de: %.2f", vendedor3, salario[2]);
	
	return 0;
	
}

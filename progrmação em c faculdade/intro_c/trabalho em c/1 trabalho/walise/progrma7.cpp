
//Aluno: Wallison Fernando Alves da Silva
//matricula: 202202903388
#include<stdio.h>
#include<stdlib.h>
char vendedor1[30], vendedor2[30], vendedor3[30];
float venda1, venda2, venda3;
float reajuste1, reajuste2, reajuste3; 
float salario1, salario2, salario3;

int main(){
	printf("digite o nome primeiro vendedor\n");
	scanf("%s",&vendedor1);
	printf("digite o nome do segundo vendedor\n");
	scanf("%s",&vendedor2);
	printf("digite o nome do terceiro um vendedor\n");
	scanf("%s",&vendedor3);
	printf("ensira a venda dos 3 vendedores separado por enter\n");
	scanf("%f", &venda1);
	scanf("%f", &venda2);
	scanf("%f", &venda3);
	reajuste1= venda1*15/100;
	reajuste2= venda2*15/100;
	reajuste3= venda3*15/100;
	
	salario1= 1000 +reajuste1;
	salario2= 1000 +reajuste2;
	salario3= 1000 +reajuste3;
	
	if(salario1> salario2 && salario1> salario3)
		printf("o  %s possui o maior salario de: %.2f", vendedor1, salario1);
	else
		if (salario2> salario3 && salario2> salario1)
			printf("o  %s possui o maior salario de: %.2f", vendedor2, salario2);
	    else
	    	if(salario3> salario2 && salario3> salario1)
	    		printf("o  %s possui o maior salario de: %.2f", vendedor3, salario1);
	
	return 0;
	
}

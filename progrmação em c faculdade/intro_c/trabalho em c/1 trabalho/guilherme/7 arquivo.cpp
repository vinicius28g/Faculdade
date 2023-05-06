
#include<stdio.h>
#include<stdlib.h>

char vendedor1[20], vendedor2[20], vendedor3[20];
float vendas1, vendas2, vendas3;
float salario1, salario2, salario3; 

int main(){
	
	printf("coloque o nome de um vendeddor e em seguida o valor de suas vendas \n");
	scanf("%s %f", &vendedor1, &vendas1);
	
	printf("coloque o nome de um vendeddor e em seguida o valor de suas vendas \n");
	scanf("%s %f", &vendedor2, &vendas2);
	
	printf("coloque o nome de um vendeddor e em seguida o valor de suas vendas \n");
	scanf("%s %f", &vendedor3, &vendas3);
	
	salario1= 1200+ vendas1*15/100;
	salario2= 1200+ vendas2*15/100;
	salario3= 1200+ vendas3*15/100;
	
	if(salario1> salario2 && salario1> salario3)
		printf("Quem vendeu mais foi: %s com o salaro final de: %f", vendedor1, salario1);
	else
		if (salario2> salario3 && salario2> salario1)
			printf("Quem vendeu mais foi: %s com o salaro final de: %f", vendedor2, salario2);
	    else
	    	if(salario3> salario2 && salario3> salario1)
	    		printf("Quem vendeu mais foi: %s com o salaro final de: %f", vendedor3, salario3);
	
	return 0;
	
}
/*Guilherme nicollas da silva brito
turma da tarde dia de sexta
07279152317*/

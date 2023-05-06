// salario total de um vendedor

#include<stdio.h>

int main(){
	char vendedor;
	double salario_fixo, vendas, total;
	
	printf("Informe o seu nome o seu salario fixo e a quantidade de vednas\n");
	scanf("%s %lf %lf", &vendedor, &salario_fixo, &vendas);
	
	total= salario_fixo + (vendas*15/100);
	
	printf("toral %.2lf", total);
	return 0;
	
	
}

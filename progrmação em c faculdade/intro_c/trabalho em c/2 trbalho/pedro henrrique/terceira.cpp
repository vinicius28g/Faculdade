/* 3. Fa�a um programa que receba do usu�rio um n�mero n
qualquer e depois retorne a soma e a multiplica��o de todos 
os naturais, de 1 a n.*/

#include<stdlib.h>
#include<stdio.h>

int main(){
	float n1, i;
	
	printf("digite um numero qualquer para ser multiplicado e somado\n");
	scanf("%f", &n1);
	
	i= n1-1;
	printf("soma dos numeros\n\n");
	while(i>0){
		printf("%.2f + %.2f = %.2f\n", n1, i, i+n1);
		i--;
	}
	printf("\n\n");
	
	i= n1-1;
	printf("multiplica��es dos numeros\n\n");
	while(i>0){
		printf("%.2f x %.2f = %.2f\n", n1, i, i*n1);
		i--;
	}
}

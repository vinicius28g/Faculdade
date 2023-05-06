/*4. Faça um programa que receba 10 valores do tipo float e 
depois imprima o quadrado de cada um desses números.*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	float n1;
	
	printf("digite um nunemro e o programa retornarar o quadrado dele\n");
	scanf("%f", &n1);
	printf("%.2f ao quadrado = %.2f\n", n1, pow(n1, 2));
}

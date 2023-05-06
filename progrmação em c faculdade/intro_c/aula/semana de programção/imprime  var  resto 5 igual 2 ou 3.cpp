// ler um intervalo de numeros e imprime os numeros que o resto da divisão por 5 foir 2 e 3

#include<stdio.h>

int main(){
	int valor1, valor2;
	printf("incira dois valores qualquer e sera imprimido os valores que na divisao por 2 o resto for 2 ou 3\n");
	scanf("%d %d", &valor1, &valor2);
	printf("\n");
	while(valor1<valor2){
		if(valor1 % 5==2 || valor1 % 5 == 3){
			printf("%d\n", valor1);
		}
		valor1++;
	}
	
	while(valor2<valor1){
		if(valor2 % 5==2 || valor2 % 5 == 3){
			printf("%d\n", valor2);
		}
		valor2++;
	}

}

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n1, n2, num_par, num_impar;
	
	printf("digite um intervalo que contenha 10 numeros\n");
	scanf("%d %d", &n2, &n2);
	if(n2- n1==10){
		for(int i =0; i<=10; i++){
			if(n1%2==0)
				num_par++;
			else
				num_impar++;
			n1++;
		}
		printf("quantidade de numeros pares %d: ", num_par);
		printf("quantidade de numeros impares %d: ", num_impar);
	} else
		printf("intermalo incorreto, tente nomanete");
}

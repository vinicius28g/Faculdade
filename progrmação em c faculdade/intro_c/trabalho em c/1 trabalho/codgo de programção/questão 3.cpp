/*varificar qual é o maior e o nemor número;
Aluno: Vinicius Guimarães dos Santos;
matricula: 202203022709;
ciências da coputação 1º periodo;*/

#include<stdio.h>

int n1, n2;

int main(){
	printf("ensira dois numeros separado por ENTER\n");
	scanf("%d %d", &n1,&n2 );
	if(n1>n2)
    printf("\nO numero %deh maior que %d ", n1,n2);
    else
    printf("\nO numero %deh menor que %d ", n1,n2);
    return 0;
}

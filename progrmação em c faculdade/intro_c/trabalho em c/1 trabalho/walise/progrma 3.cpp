//Aluno: Wallison Fernando Alves da Silva;
//matricula: 202202903388;
#include<stdio.h>
#include<stdlib.h>
int numero1= 0;
int numero2=0 ;
int main(){
	printf("coloque dois numeros e depois deh uma enter\n");
	scanf("%d %d", &numero1,&numero2 );
	if(numero1>numero2)
    printf("\n %d  >  %d ", numero1,numero2);
    else
    printf("\n %d  <  %d ", numero1,numero2);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int numb1, numb2;
int main(){
	
	printf("informe dois numeros\n");
	scanf("%d %d", &numb1, &numb2 );
	if(numb2>numb1)
    printf("\n%d eh maior que  %d ", numb2,numb1);
    else{
    	if(numb1== numb2){
    	printf("os numeros sao inguais");
    	return (0);
		}
		printf("\n%d eh menor que %d ", numb2,numb1);
	}
    
    return (0);

}
/*Aluno: Guilherme nicollas da silva brito
matricula: 07279152317 
turno tarde aula de sexta*/

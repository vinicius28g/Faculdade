#include<stdio.h>
#include<stdlib.h>

int main(){
	float notas [4], soma = 0, media;
	int i = 1;
	
	while(i<=3){
		printf("ensira a nota do aluno %d: ", i);
		scanf("%f", &notas [i]);
		if(notas [i]>= 0 && notas [i]<=10){
			soma += notas[i];
			i++;
		} else
			printf(" a nota do aluno deve ser no maximo 10 e no minino 0\n");
	}
	
	media = soma/3;
	printf("a mediad dos 3 alunos eh: %f", media);
}

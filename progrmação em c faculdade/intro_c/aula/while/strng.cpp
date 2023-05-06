#include<stdio.h>
#include<stdlib.h>

int i = 1;
int main(){
	float media_salarios, soma_salario = 0, menor_salario = 100000.000;
	int qnt_pessoas, masculino, feminino = 0, pessoa = 1;
	int menor_idade = 100, maior_idade = 0, idade_menor_salario =0;
	char sexo_menor_salario;
	
	printf("qual a quantidade de pessoas que vao participar da pesquisa");
	scanf("%d", &qnt_pessoas);
	
	int idade [qnt_pessoas];
	char sexo [qnt_pessoas];
	float salario [qnt_pessoas];
	
	while (i <= qnt_pessoas){
	 	printf("\ninforme o sexo da pessoa %d: ", pessoa);
	 	scanf("%s", &sexo[i]);
		
	 	printf("\ninforme a idade da pessoa %d: ", pessoa);
	 	scanf("%d", &idade[i]);
	 	
	 	printf("\ninforme a salario da pessoa %d: ", pessoa);
	 	scanf("%f", &salario[i]);
	 	
	 	soma_salario+= salario [i];
	 	
	 	if (sexo[i] == 'f'){
	 		feminino++;	
		 }
	 		
		if(idade [i]< menor_idade){
			menor_idade = idade[i];
		}
		
		if (idade [i] > maior_idade){
			maior_idade= idade [i];
		}
		
		if(salario[i]< menor_salario){
			menor_salario = salario[i];
			sexo_menor_salario= sexo[i];
			idade_menor_salario = idade [i];
		}
		pessoa++;
		i++;	
	}
	 media_salarios=  soma_salario/qnt_pessoas;
	printf("a media dos salario das pessoas pesquisada eh: %.2f\n", media_salarios);
	printf("a menor idade eh: %d\n", menor_idade);
	printf("a maior idade eh: %d\n", maior_idade);
	printf("quantidade de mulhres: %d\n", feminino);
	printf("a pessoa com idade %d pertecendo ao sexo %s possui salario de %.2f", 
	idade_menor_salario, sexo_menor_salario, menor_salario);
}

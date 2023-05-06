#include<stdlib.h>
#include<stdio.h>

// calculando a media de idades;

int main(){
	int qnt_idades, soma_idades= 0, mostra_idade =1;
	float media;
	
	printf("informe a quantidade de idades utilizada\n");
	scanf("%d", &qnt_idades);
	int idades[qnt_idades];
	
	for (int i =0; i<qnt_idades; i++){
		printf("digite a idade %d: ", mostra_idade);
		mostra_idade++;
		scanf("%d", &idades[i]);
		soma_idades += idades[i];
	}

	media= soma_idades/qnt_idades;

	printf("\na media das idade eh: %.2f", media);
	
}

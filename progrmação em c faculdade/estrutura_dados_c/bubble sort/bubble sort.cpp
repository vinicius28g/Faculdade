#include<stdlib.h>
#include<stdio.h>

#define TAM_VET 20

int* bubble_sort( int vet_aux[]){
	
	int aux; 
	int troca = 0;

	
	while(troca == 0){
		troca = 1;
		for(int i = 0; i < TAM_VET-1 ; i++){
			if(vet_aux[i] > vet_aux[i+1]){
				aux = vet_aux[i];
				vet_aux[i] = vet_aux[i+1];
				vet_aux[i+1] = aux;
				troca = 0;
			}
		}
	}
	
	return vet_aux;

}

int main(){

	int vet[TAM_VET] = {4,2,5,1,3, 7,10,13,20,8,11,18,9,14,17,15,12,19, 16, 6};
	int *ponteiro;
	
	printf("valores desorganizados\n\n");
	
	for(int i = 0; i<TAM_VET; i++){
		printf(" %d ", vet[i]);
	}
	 
	ponteiro = bubble_sort(vet);
	
	printf("\n-------------------------------------------");
	printf("\n\nvalores organizados crescentes\n\n");
	
	for(int i = 0; i<TAM_VET; i++){
		printf("  %d ", ponteiro[i]);
	}
	
	printf("\n-------------------------------------------");
}
//switch case imprime os numeros do mes 
#include<stdio.h>

int main(){
	int op;
	printf("digite um numero de 1 a 7:"); 
	scanf("%d", &op);

		switch (op){
		
			case 1:
				printf("domingo");
				break;
			
			case 2:
				printf("segunda-feira");
				break;
			
			case 3:
				printf("terça-feira");
				break;
			
			case 4:
				printf("quarta-feira");
				break;
			
			case 5:
				printf("quinta-feira");
				break;
			
			case 6:
				printf("sexta-feira");
				break;
			
			case 7:
				printf("sabado");
				break;
			
			default:
				printf("valor invalido");	
		}
		return 0;
}

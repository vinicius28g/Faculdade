#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	// var da primeira função
	char alternativa [10];
	int alternativa_2;
	float porcentagem, number;
	//var da segunda função
	float x1, y1, x2, y2, distancia;
	//var da terceira função
	int ano_at, mes_at, dia_at;
	int ano_an, mes_an, dia_an;
	int ano_final, mes_final, dia_final;
	
	do{
		printf("\nescolha um opcao:\n");
		printf("1: porcentagem de um numero;\n");
		printf("2: distancia entre dois pontos;\n");
		printf("3:  seu tempo de vida em dias;\n");
		printf("4: 'S A I R'\n");
		scanf("%d", &alternativa_2);
		
		switch(alternativa_2){
			case 1: 
				printf("digite um numero: ");
				scanf("%f", &number);
				printf("digite 'acrecimo' ou 'desconto': ");
				scanf("%s", &alternativa);
				printf("a alternativa foi: %s\n", alternativa);
				
				if(strcmp(alternativa, "acrecimo")==0){
					printf("digite a porcentagem: ");
					scanf("%f", &porcentagem);
					printf("o seu acrecimo foi: %.3f\n", number*porcentagem/100);
					printf("o acrecimo total foi: %.3f\n", number + (number*porcentagem/100));
				}
				if(strcmp(alternativa, "desconto")==0){
					printf("digite a porcentagem: ");
					scanf("%f", &porcentagem);
					printf("o seu desconto foi: %.3f\n", number*porcentagem/100);
					printf("o o desconto total foi: %.3f\n", number - (number*porcentagem/100));
				}
				system("pause");
				system("cls");
			break;
			case 2:
				printf("insira duas cordenadas\n");
				printf("cordenada 1:\n");
				printf("x1: ");
				scanf("%f", &x1);
				printf("y1: ");
				scanf("%f", &y1);
				printf("cordenada 2:\n");
				printf("x2: ");
				scanf("%f", &x2);
				printf("y2: ");
				scanf("%f", &y2);
	
				distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
				printf("a distancia eh: %.2f\n", distancia);
				system("pause");
				system("cls");
			break;
			case 3:
				printf("informe a data atual em numero\n");
				printf("ano: ");
				scanf("%d", &ano_at);
				printf("mes: ");
				scanf("%d", &mes_at);
				printf("dia: ");
				scanf("%d", &dia_at);

				printf("informe a data a do seu aniversaio\n");
				printf("ano: ");
				scanf("%d", &ano_an);
				printf("mes: ");
				scanf("%d", &mes_an);
				printf("dia: ");
				scanf("%d", &dia_an);
				
				ano_final= ano_an - ano_at;
				mes_final= mes_an - mes_at;
				dia_final= dia_an - dia_at;
				if(ano_final<0)
					ano_final *= -1;
				if(mes_final<0)
					mes_final *= -1;
				if(dia_final<0)
					dia_final *= -1;
				
				printf("sua idade em dias eh: %d dias\n", ano_final*360 + mes_final*30 +dia_final);
				system("pause");
				system("cls");
				
		}
	}while(alternativa_2!= 4);
}

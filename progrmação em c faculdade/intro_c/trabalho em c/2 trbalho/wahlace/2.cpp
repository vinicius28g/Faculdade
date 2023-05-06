#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int escolha, a=1, b=1;
	float tabuada, salario, comissao, vendas;
	double resposta =60 , fatorial;
	
	
	while(a>0){
		printf("qual funcao voce deseja?\n");
		printf("1) tabuada\n");
		printf("2) fatoracao de um numero\n");
		printf("3) salario de um vendedor\n");
		printf("4) sair\n");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 1: 
				printf("voce quer a tabuada de qual numero?\n");
				scanf("%f", &tabuada);
				
				for(int i =1; i<=10; i++)
					printf("%.2f + %d = %.2f\n", tabuada, i, tabuada+i);
				printf("\n");
				for(int i =1; i<=10; i++)
					printf("%.2f - %d = %.2f\n", tabuada, i, tabuada-i);
				printf("\n");
				for(int i =1; i<=10; i++)
					printf("%.2f x %d = %.2f\n", tabuada, i, tabuada*i);
				printf("\n");
				for(int i =1; i<=10; i++)
					printf("%.2f / %d = %.2f\n", tabuada, i, tabuada/i);
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 2:
				
				while(resposta< 0 || resposta>50){
				printf("vamos calcular o fatorial de um numero\n");
				printf("informe um neumro qualquer maior que 0 e menor que 50.\n");
				scanf("%lf", &resposta);
				}
				fatorial = resposta;
				
				while(resposta>resposta -b && resposta>b){
				fatorial = fatorial *(resposta -b);
				b--;
				}
				printf("%.2f! = %.2f\n", resposta, fatorial);
				system("pause");
				system("cls");
			break;
			case 3:
				printf("informe o salario de um vendedor: ");
				scanf("%f", &salario);
				printf("quanto eh a comissao de venda em porcentagem: ");
				scanf("%f", &comissao);
				printf("quanto foi vendido: ");
				scanf("%f", &vendas);
				
				printf("o seu salario final eh: %.2f\n", salario+(comissao/100 *vendas));
				printf("seu salario fixo eh: %.2f\n", salario);
				printf("voce ganhou %.2f  de comissao\n", vendas*comissao/100);
				system("pause");
				system("cls");
			break;
			case 4:
				return 0;
					
		}	
	}
}

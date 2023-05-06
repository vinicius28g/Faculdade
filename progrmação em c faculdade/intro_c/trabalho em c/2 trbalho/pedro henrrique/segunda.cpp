// menu de 3 opção

#include <stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	int flag_while =1;
	int opcao, quant, quant_atv, quant_mat;
	float soma =0, base, potencia;
	char nome[50], matricula [20];
	
	
	while(flag_while == 1){
		printf("escolha uma opcao\n");
		printf("(1) meidia dos alunos\n");
		printf("(2) informacoes academicas\n");
		printf("(3) quandrado de um numero\n");
		printf("(4) SAIR\n");
		scanf("%d", &opcao);
		
		if(opcao ==1){
			system("cls");
			printf("informe quantos alunos vao participar: ");
			scanf("%d", &quant);
			printf("informe a quantidade de atividade: ");
			scanf("%d", &quant_atv);
		}
		
		float notas [quant] [quant_atv];
		float media [quant];
	
		switch (opcao){
			case 1:
			
				printf("informe a nota das %d atividade (s)\n", quant_atv);
			
				for(int l =0; l< quant; l++){
					printf("aluno %d\n", l+1);
					for(int c = 0; c < quant_atv; c++){
						scanf("%f", &notas[l][c]);
						soma += notas[l][c];
					}	
				media [l] = soma/ quant_atv;
				soma = 0;	
				}
			
				for(int i = 0; i<quant; i++){
					printf("a media do aluno %d: %.2f\n", i+1, media[i]);
				}
				system("pause");
				system("cls");
				break;

			case 2:
				inicio:	
				system("cls");
				printf("deseja atualizar o cadastro ou velo?\n");
				printf("(1) atualizar\n");
				printf("(2) ver\n");
				printf("(3) voltar\n");
				scanf("%d", &opcao);
				
				switch(opcao){
					case 1:
						system("cls");
						printf("informe o seu nome completo: ");
						scanf("%s", &nome);
						printf("informe a sua matricual: ");
						scanf("%d", &matricula);
						printf("quantas materias voce faz?\n");
						scanf("%d", &quant_mat);
						printf("cadastro atualizado!!\n");
						goto inicio;
					break;
					case 2:
						system("cls");
						printf("seu cadastro eh:\n");
						printf("nome: %s\n", nome);
						printf("matricula: %d\n", matricula);
						printf("quantidade de materia: %d\n", quant_mat);
						system("pause");
						goto inicio;
					break;	
					case 3:
						system("cls");
						break;
				
				}
			break;
			case 3:
				system("cls");
				printf("vamos calcular a potencia de um numero.\n");
				printf("informe o numero da base: ");
				scanf("%f", &base);
				printf("informe o numero da potencia: ");
				scanf("%f", &potencia);
				
				printf("o quadrado de %.2f eh: %.2f\n", base, pow(base, potencia));
				system("pause");
				system("cls");
				break;
			case 4: 
				return 0;
				break;		
		}
	}
}
	


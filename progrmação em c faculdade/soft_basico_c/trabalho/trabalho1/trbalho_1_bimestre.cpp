#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "figurasg.h"

/* Vinicius Guimarães dos Santos; 
matricula: 202203022709
Victhor Gabriel Bandeira Barros da Costa;
matricula: 202203172603
software basico em c- tumar de quinta- tarde;*/



int main(){
	int cor, figura,op, op2, altura;
	int gravado =0;
	char nome [30];
	figura_goto:
	menuFormas();
	printf("\n\n digite o numero de uma figura: ");
	scanf("%i", &figura);
	system("cls");
	cor = cores();
	printf("escolha uma altura: ");
	scanf("%i", &altura);
	system("cls");
	switch (figura){
		case 1:
			piramide(altura, cor);
		break;
		
		case 2:
			obtusagulo(altura, cor);
		break;
		
		case 3:
			lozangulo(altura, cor);
		break;
		
		case 4:
			exagono(altura, cor);
		break;
		
		case 5:
			trianguloRet(altura, cor);
			
		break;
		
		case 6:
			trapezioRet(altura, cor);
		break;
		
		default:
			printf("voce escolheu uma figura que nao existe. escolha outra\n");
			system("pause");
			system("cls");
			goto figura_goto;
		break;
	}
	
	if(gravado ==0){
		erro_escolha:
		printf("\n digite...\n"
			"1- escolher uma nova figura\n"
			"2- salvar em arquivo\n"
			"3- encerra programa\n"
			"DIGITE AQUI ... ");
		scanf("%i", &op);
	}else{
		goto ja_tem_nome;
	}
	
	switch(op){
		case 1:
			system("cls");
			goto figura_goto;
		break;
		case 2:
			gravado =1;
			printf("digite o nome do arquivo sem espacos: ");
			scanf("%s", &nome);
			strcat(nome, ".txt");
			ja_tem_nome:
			salvArqui(figura, altura, nome);
			erro_gravar:
			system("pause");
			system("cls");
			printf("\n deseja gravar outra figura?\n");
			printf(" 1- sim\n 2- encerra o programa\n 3- voltar ao menu principal\n  DIGITE AQUI... ");
			scanf("%i", &op2);
			switch(op2){
				case 1:
					system("cls");
					goto figura_goto;
				break;
				
				case 2:
					return 0;
				break;
				
				case 3:
					gravado =0;
					goto figura_goto;
				break;
				
				default:
					printf("opcao incorreta. Tente novamente.\n");
					goto erro_gravar;
				break;
			}
		break;
		
		case 3:
			return 0;
		break;
		
		default:
			printf("opcao incorreta. Tente novamente.\n\n");
			goto erro_escolha;
		break;
	}

	return 0;
	//scanf("%s", &nome);
//	cores();
//	obtusagulo();
//	lozangulo();
//	exagono();
	
//salvArqui(4, 10, nome);
}

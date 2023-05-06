#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define TAM_ALUNOS 5

int main(){
	// estou susbstituindo o ç por s
	// questão 2, cadastro  5 alunos com dados de matricula e endereço
	int op;
	int voltar =1;
	
	struct endereco_aluno{
		char rua[40] = "NUUL";
		char bairro[40] = "NUUL";
		int numero = 0000;
		int cep = 00000000;
	};
	
	struct aluno{
		char nome [50] = "-------------";
		char curso [50] = "-------------";
		char matricula [6]= "00000";
		int idade;	
	};
	
	struct endereco_aluno endereco[TAM_ALUNOS];
	struct aluno alunos[TAM_ALUNOS];
	
	inicio:
	system("cls");
	printf("escolha uma opcao\n");
	printf("1- cadastrar um aluno\n");
	printf("2- alunos cadastrados\n");
	scanf("%i", &op);
	switch(op){
		case 1:
			for(int i=0; i<TAM_ALUNOS; i++){
				editar:
				system("cls");
				printf("\n\n---- Bem vindo ao sistema de cadastro aluno %i------\n\n", i);
				printf("nome completo: ");
				fflush(stdin);
				fgets(alunos[i].nome, 50, stdin);
				printf("idade: ");
				scanf("%i", &alunos[i].idade);
				printf("curso: ");
				fflush(stdin);
				fgets(alunos[i].curso, 50, stdin);
				printf("informe sua matricula: ");
				fflush(stdin);
				fgets(alunos[i].matricula, 6, stdin);
				printf("\n------------------------------------------------------------\n");
				printf("\tendereco.\n");
				printf("Rua: ");
				fflush(stdin);
				fgets(endereco[i].rua, 40, stdin);
				printf("numero: ");
				scanf("%i", &endereco[i].numero);
				printf("Bairro: ");
				fflush(stdin);
				fgets(endereco[i].bairro, 40, stdin);
				printf("CEP: ");
				scanf("%i", &endereco[i].cep);
				
				system("cls");
				printf("----------- confira seus dados aluno %i----------\n\n", i);
				printf("matricula: %s\n",alunos[i].matricula);
				printf("Nome: %sn",alunos[i].nome);
				printf("idade: %i\n", alunos[i].idade);
				printf("curso: %s\n\n", alunos[i].curso);
				printf("\n\n----------------------------------------------\n\n");
				printf("\t endereco\n");
				printf("Rua: %s ", endereco[i].rua);
				printf("Bairro: %s\n", endereco[i].bairro);
				printf("Numero: %i\t", endereco[i].numero);
				printf("CEP: %i", endereco[i].cep);
				printf("\n\n----------------------------------------------\n\n");
				
				// caso o usuário erre uma informação ele pode editar as informação.
				voltar: // localizador da função goto da parte de confirmar dado.
				
				printf("digite 1 para editar os dados ou 0 para continuar: "); 
				scanf("%i", &voltar);
				if(voltar==1){
					goto editar; 
				}else if(voltar !=1 && voltar !=0){
					printf("opcao invalida, tente novamente.\n");
					goto voltar;
				}
		
			}
			goto inicio;		
		break;
		
		case 2:
			
				for(int i =0; i<TAM_ALUNOS; i++){
				system("cls");
				printf("----------- alunos cadastrado %i ----------\n\n", i+1);
				printf("matricula: %s\n",alunos[i].matricula);
				printf("Nome: %s\n",alunos[i].nome);
				printf("idade: %i\n", alunos[i].idade);
				printf("curso: %s\n", alunos[i].curso);
				printf("\n\n----------------------------------------------\n\n");
				printf("\t endereco\n");
				printf("Rua: %s ", endereco[i].rua);
				printf("Bairro: %s\n", endereco[i].bairro);
				printf("Numero: %i\t", endereco[i].numero);
				printf("CEP: %i", endereco[i].cep);
				printf("\n\n----------------------------------------------\n\n");
				
				system("pause");
				}
			goto inicio;
		break;
	
		default:
			printf("opcao invalida");
			system("pause");
			goto inicio;
		break;
	}
}

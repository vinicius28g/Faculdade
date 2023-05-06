#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define TAM_MATRICULA 5
/* exercicio 3;
questão de struct aninhado;*/
int main(){
	// estou susbstituindo o ç por s

	int op;
	int voltar =1;
	int TAM_ALUNOS;
	
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
		struct endereco_aluno endereco; // decclaração do struct aninhado
	};
	
	inicio1:
	system("cls");
	printf("quantos alunos serao cadastrado?\n");
	scanf("%i", &TAM_ALUNOS); // perguntas ao usuario quantos alunos serão cadastrados
	
	struct aluno alunos[TAM_ALUNOS]; 
	inicio: // localizador da função goto da parte de início.
	system("cls");
	printf("escolha uma opcao\n");
	printf("1- cadastrar um aluno\n");
	printf("2- alunos cadastrados\n");
	printf("3- atualizar a quantidades de alunos\n");
	scanf("%i", &op);
	switch(op){
		case 1:
			// cadsatro dos alunos com dados do alunos e endereço;
			for(int i=0; i<TAM_ALUNOS; i++){
				editar: // localizador da função goto da parte de editar dado.
				system("cls");
				printf("\n\n---- Bem vindo ao sistema de cadastro aluno %i------\n\n", i);
				printf("nome completo: ");
				fflush(stdin);
				fgets(alunos[i].nome, 50, stdin);
				printf("curso: ");
				fflush(stdin);
				fgets(alunos[i].curso, 50, stdin);
				printf("informe sua matricula: ");
				fflush(stdin);
				fgets(alunos[i].matricula, 6, stdin);
				printf("\n------------------------------------------------------------\n");
				printf("endereco.\n");
				printf("Rua: ");
				fflush(stdin);
				fgets(alunos[i].endereco.rua, 40, stdin);
				printf("numero: ");
				scanf("%i", &alunos[i].endereco.numero);
				printf("Bairro: ");
				fflush(stdin);
				fgets(alunos[i].endereco.bairro, 40, stdin);
				printf("CEP: ");
				scanf("%i", &alunos[i].endereco.cep);
				system("cls");
				printf("----------- confira seus dados----------\n\n");
				printf("matricula: %s\n",alunos[i].matricula);
				printf("Nome: %s\n",alunos[i].nome);
				printf("curso: %s\n\n", alunos[i].curso);
				printf("\n\n----------------------------------------------\n\n");
				printf("\t endereco\n");
				printf("Rua: %s ", alunos[i].endereco.rua);
				printf("Bairro: %s\n", alunos[i].endereco.bairro, 40, stdin);
				printf("Numero: %i\t", alunos[i].endereco.numero);
				printf("CEP: %i", alunos[i].endereco.cep);
				printf("\n\n----------------------------------------------\n\n");
				
				// caso o usuário coloque uma informação ele pode editar as informação.
				voltar: // localizador da função goto da parte de confirmar dado.
				printf("digite 1 para editar os dados ou 0 para continuar: "); 
				scanf("%i", &voltar);
				if(voltar==1){
					goto editar; 
				}else{
					printf("opcao invalida, tente novamente.\n");
					goto voltar;
				}
		
			}
			goto inicio; // retorna ao menu inicial.	
		break;
		
		case 2:
			// mostra os alunos cadastrado
				for(int i =0; i<TAM_ALUNOS; i++){
				system("cls");
				printf("matricula: %s\n",alunos[i].matricula);
				printf("Nome: %s\n",alunos[i].nome);
				printf("curso: %s\n\n", alunos[i].curso);
				printf("\n\n----------------------------------------------\n\n");
				printf("\t endereco\n");
				printf("Rua: %s ", alunos[i].endereco.rua);
				printf("Bairro: %s\n", alunos[i].endereco.bairro, 40, stdin);
				printf("Numero: %i\t", alunos[i].endereco.numero);
				printf("CEP: %i", alunos[i].endereco.cep);
				printf("\n\n----------------------------------------------\n\n");
				system("pause");// vai mostrar aluno por aluno, para ficar melhor do usuário ver
				} 
			goto inicio;
		break;
		
		case 3:
			goto inicio1;
		break;
		
		default:
			printf("opcao invalida");
			goto inicio;
		break;
	}
}

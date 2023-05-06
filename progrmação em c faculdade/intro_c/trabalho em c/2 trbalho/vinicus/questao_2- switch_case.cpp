/* vinicius Guimarães dos Santos;
mtrícula: 202203022709;
introdução a programação em c manhã;*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

//  ###################### inicio da função longin ####################################

int longin(){
	char senha[4], usuario[70];
	char conf_senha[4], conf_usuario[70];
	
	setlocale(LC_ALL, "portuguese"); // padroniza a lingua que vai ser utilizado no codigo. 
	
	do{
		printf("crie um usuário: ");
		scanf("%s", &usuario);
		
		if(strlen(usuario) >70){ // verifica se ultrapassou a capacidade da string.
		system("cls");
		printf("\no campo usuário so pode ter 4 caracteres\n");
		printf("por favor, ensira um usuário valido\n");
		}
	}while(strlen(usuario) >70);
	 // coloquei o do while para se o numeuro da string ultrapassar, o usuário poderar ser colocado novamente
	 
	do{
		printf("crie uma senha de 4 gigitos: ");
		scanf("%s", &senha);
		
		if(strlen(senha)> 4){
			system("cls");
			printf("usuário: %c", usuario);
			printf("\no campo senha so pode ter 4 caracteres");
			printf("\npor favor, insira uma senha válida\n");
		}
	}while(strlen(senha)>4);
	
	printf("\nobrigado por fazer o longin\n");
	system("pause");
	system("cls");
	printf("agora insira  seu longin para poder entrar\n");
	
	int i =1;
	while(i<= 3){
		printf("\n");
		printf("digite o seu usuário: ");
		scanf("%s", &conf_usuario);
		
		printf("digite a sua senha: ");
		scanf("%s", &conf_senha);
		i = strcmp(conf_usuario, usuario);
		
		if(strcmp(conf_usuario, usuario) == 0 && strcmp(conf_senha, senha) == 0){
			//compara as string e exigi um valor de retorno ,ou seja, 0.
			break;// sai do loop while.
		}
		else{
			i++;
			printf("senha ou usuário incorreto, tente novamente\n");
		}
		if(i>3){
			printf("o números de tentativas foi excedido\n");
			printf("o programa sera encerrado\n");
			return(0);
		}
    } 
	
	printf("\nseja bem vindo %s\n", usuario);
	system("pause");
}

// ---------------------------------- fim da função ----------------------------------------------

// ####################### inicio da função calculadora ##########################################

int calculadora(){
	setlocale(LC_ALL, "portuguese");
	int qnt, op, flag = 1;
	float aux = 0;
	
	inicio_2:
	
	printf("você deseja fazer a operaçãp com quantos números? ");
	scanf("%d", &qnt);
	float elementos [qnt];
	printf("\nqual operação você deseja fazer?\n");
	printf("1- soma\n"
		"2- subtração\n"
		"3- multiplicação\n"
		"4- divisão\n"
		"5- SAIR.\n");
	scanf("%d", &op);
	
	switch(op){
		case 1: 
			aux = 0;
			flag = 1;
			printf("digite os números que você vai usar: ");
		
			for(int i =0; i<qnt; i++){
				scanf("%f", &elementos[i]);
				aux+= elementos[i];
			}
			printf("a soma foi: %.2f\n", aux);
			system("pause");
			system("cls");
			goto inicio_2;
		break;
		
		case 2:
			aux = 0;
			flag =1;
			printf("digite os númeors que você vai usar: ");
		
			for(int i =0; i<qnt; i++){
				scanf("%f", &elementos[i]);
				if(flag ==1){			// entrta na primeira vez para que não entre 0 na operação
					aux = elementos [0];
					flag = 0;
					goto pulaa;
				}
				aux-= elementos[i];
				pulaa:
				printf(" ");
			}
			printf("a subtração foi: %.2f\n", aux);
			system("pause");
			system("cls");
			goto inicio_2;
		break;
		
		case 3:
			aux = 0;
			flag = 1;
			printf("digite os números que você vai usar: \n");
		
			for(int i =0; i<qnt; i++){
				scanf("%f", &elementos[i]);
				if(flag ==1){
					aux = elementos [0];
					flag = 0;
					goto pulab;
					printf(" ");
				}
				
				aux*= elementos[i];
				pulab:
				printf(" ");
			}
			printf("a multiplicação foi: %.2f\n", aux);
			system("pause");
			system("cls");
			goto inicio_2;
		break;
		
		case 4:
			aux = 0;
			flag =1;
			printf("digite os números que você vai usar: \n");
		
			for(int i =0; i<qnt; i++){
				
				scanf("%f", &elementos[i]);
				
				if(flag ==1){
					aux = elementos [0];
					flag = 0;
					goto pulac;
				}
				aux/= elementos[i];
				pulac:
				printf(" ");
			}
			printf("a divisão foi: %.2f\n", aux);
			system("pause");
			system("cls");
			goto inicio_2;
		break;
		case 5:
			return 0;
	}
	
}

// ---------------------------- fim da função ------------------------------------

// ################### inicio da função tabuada ##################################

int tabuada(){
	
	float tabuada;
	char comando[10];
		do{
					printf("informe qual número você quer a tabuada.\n");
					printf("OBS: se for numero decimal utilise virgula e não ponto Ex: 1,2\n");
					printf("digite a tabuada desejada: ");
					scanf("%f", &tabuada);
					printf("\n");
				
					for(int i=1; i<=10; i++)
						printf("%d + %.3f = %.3f \t %d - %.3f = %.3f \n", i, tabuada, i+tabuada, i, tabuada,i-tabuada);
						printf("\n \n");
					for(int i=1; i<=10; i++)
						printf("%d x %.3f = %.3f \t %d / %.3f = %.3f \n", i, tabuada,i*tabuada, i, tabuada,i/tabuada);
					printf("\n");
					printf("digite uma tecla e der enter para continua ou digite \"SAIR\" \n");
					// o \"SAIR\" é para exibir algo entre aspas
					scanf("%s", &comando);
					system("cls");
				}while(strcmp(comando, "SAIR") != 0);
				
				
				
	}
// ---------------------------- fim da função ----------------------------------------

// ####################### inicio da função principal ################################

int main(){
	int op;
	 inicio:
	printf("--------------------------- MENU-------------------------\n");
	printf("1- longin.\n"
	       "2- calculadora.\n"
		   "3- tabuada.\n"
		   "4- sair.\n");
	scanf("%d", &op);
	
	switch (op){
		case 1:
			system("cls");
			longin();
			system("cls");
			goto inicio;
			break;
		case 2: 
			system("cls");
			calculadora();
			system("cls");
			goto inicio;
			break;
		case 3: 
			system("cls");
			tabuada();
			system("cls");
			goto inicio;
			break;
	}
}

// -------------------------------- fim da função --------------------------------------

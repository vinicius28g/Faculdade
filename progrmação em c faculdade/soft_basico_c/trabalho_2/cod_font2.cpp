#include <stdio.h> //gets
#include <stdlib.h> // atoi
#include <conio.h> // getch
#include <string.h> // strcpy, strlen
#include <ctype.h> // islower, toupper
#include <locale.h> // setlocale
#include <time.h> // necessario pra colocar data e hora

#define ESC 27
#define TAM_VET 100
#define TAM_CARC 50

// declaração de funções 
void menu(); void cardapio(); /*void consultar();*/ void altera(); void exclui();

// declarações de variaveis 
int contador =0;
char cliente [TAM_VET][TAM_CARC];
char op[1];
FILE *pont_arq;

// declaração dos structs
struct tm *data_hora_atual;
struct pedido{
	char descricao [TAM_CARC];
	int quantidade;
	float valor;
	float total;
};

struct pedido pedidos[TAM_VET];
// funçao principal
int main(){
	setlocale(LC_ALL, "Portuguese");  
	menu();
	return (0);
}

 void menu(){
	setlocale(LC_ALL, "Portuguese");
 	while(true){
	
		system("cls");
		printf("seja bem vindo \n\n");
		printf("|============================================|\n");
		printf("|                 COMEU MORREU               |\n");
		printf("|--------------------------------------------|\n");
		printf("|      1- fazer Pedido| 2 - imp. Cumpom      |\n");
		printf("|      3 Alt. Pedido  | 4 - canselar Pedido  |\n");
		printf("=============================================|\n");
		printf("seleione a opcao desejada ou 'Esc' para sair: ");
		op[0] = getch();
		
		switch (op [0]){
			case '1':
				cardapio();
			break;
			
			case '2':
				//consultar();
			break;
			
			case '3':
				printf("entrou 2");
				system("pause");
			break;
			
			case '4':
				printf("entrou 2");
				system("pause");
			break;
			
			case ESC:
				exit(0);
			
			default:
				printf("\nopção incorreta- Tente novamente.\n");
				system("pause");
		}
	 }
	
}

void gravar_arq(){
	system("pause");
	float total_compra = 0;
	static int cont_nome =0;
	int erro;
	
	printf(" contador: %i", contador);
 			while(cliente[cont_nome] [0]=='\0'){ 
		    printf("ola, me inforem o seu nome para proceguir o pedido: ");
		    gets(cliente[cont_nome]);
	        if(cliente[cont_nome][0]=='\0') 
			printf(" Nome inválido \n"); 
		}
			
			strcat(cliente[cont_nome], ".txt");
			// abrindo arquivo
			pont_arq= fopen(cliente[cont_nome], "w");
			
			fprintf(pont_arq, "nick cliente: %s", cliente[cont_nome]);
			printf("euntrou1");
			erro= fputs(  "|======================================================|\n"
			  		"|                       pedido                         |\n"
			        "|======================================================|\n"
			        "|   DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n", pont_arq);
			        printf("euntrou2");
			for(int i =0; i< contador; i++){
				fprintf(pont_arq, "|  %s \t    \t %i \t  %.2f \t \t%.2f \t\n", pedidos[i].descricao, pedidos[i].quantidade, 
				pedidos[i].valor, pedidos[i].total);
				total_compra += pedidos[i].total;
				printf("euntrou3");
			}
		 	fprintf(pont_arq, "| TOTAL DA COMPRA : %.2f\n", total_compra);
		 	printf("euntrou4");
			// gravar data e hora;
			fprintf(pont_arq, "\nHora ...: %d:",data_hora_atual->tm_hour);//hora   
			fprintf(pont_arq, "%d:",data_hora_atual->tm_min);//minuto
			fprintf(pont_arq, "%d\n",data_hora_atual->tm_sec);//segundo 
			fputs("\t\t", pont_arq);
			fprintf(pont_arq, "\nData ...: %d/", data_hora_atual->tm_mday);
			fprintf(pont_arq, "%d/",data_hora_atual->tm_mon+1); //mês
			fprintf(pont_arq, "%d",data_hora_atual->tm_year+1900); //ano
			printf("euntrou5");
			if( erro == EOF){
				printf("Erro ao tentar gravar os dados! \n");
				printf("por favor, faca seu pedido novamente");
				system("pause");
				menu();
			}
	       		
			printf("euntrou6");
			fclose(pont_arq);
}

void sacola(){ // chamar de sacola
	system("cls");
	float total_compra = 0;
	
	printf("|======================================================|\n"
		   "|                       SACOLA                         |\n"
		   "|======================================================|\n"
		   "|   DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n");
	for(int i =0; i< contador; i++){
		printf("|  %s \t    \t %i \t  %.2f \t \t%.2f \t\n", pedidos[i].descricao, pedidos[i].quantidade, 
		pedidos[i].valor, pedidos[i].total);
		total_compra += pedidos[i].total;
	}
 	printf("| TOTAL DA COMPRA : %.2f\n\n", total_compra);
}

void cardapio(){
	// valores dos laches
	float hamburg = 5.50;
	float misto = 4.00;
	float cachorro= 4.00;
	float coca = 3.00;
	float fanta = 3.00;
	float xtudo = 10.00;
	
	int cod_lanche, qnt_lanche;
	float valor;
	
	system("cls");
	
	printf("\n\n");
	printf("|===========================================|\n");
	printf("|                   MENU                    |\n"
		   "|===========================================|\n"
		   "|               ESCOLHA UM LANCHE           |\n"
		   "|-------------------------------------------|\n"
		   "|     CODIGO   |    PRODUTO   |    VALOR    |\n"
		   "|-------------------------------------------|\n");
	printf("|      1       |   HAMBURG    |     %.2f    |\n", hamburg);
	printf("|      2       |   MISTO      |     %.2f    |\n", misto);
	printf("|      3       |CACHORRO QUENTE|    %.2f    |\n", cachorro);
	printf("|      4       |   COCA-COLA  |     %.2f    |\n", coca);
	printf("|      5       |  FANTA LATA  |     %.2f    |\n", fanta);
	printf("|      6       |    X-TUDO    |     %.2f   |\n\n", xtudo);
	printf("precione Esc para voltar.\n");
	printf("Escolha o codigo de um produto: ");
	cod_lanche= getch();

	switch(cod_lanche){
		case '1':
			system("cls");
			strcpy(pedidos[contador].descricao, "HAMBURG");
			valor = hamburg;
		break;
		case '2':
			printf("entrou2");
		break;
		
		case ESC:
			menu();
		break;
	}
	
	printf("informe a quantidade de %s: ", pedidos[contador].descricao);
	scanf("%i", &qnt_lanche);
	
	printf("%i %s \n", qnt_lanche, pedidos[contador].descricao);
	printf("valor Unit..: %.2f\n", valor);
	printf("TOTAL..: %.2f\n", valor*qnt_lanche);
	
	sacola:
	printf("adicionar a sacola? 1- sim ou 2- nao\n");
	cod_lanche = getch();
	
	switch(cod_lanche){
		case '1':
			pedidos[contador].quantidade = qnt_lanche;
			pedidos[contador].valor= valor;
			pedidos[contador].total = qnt_lanche*valor;
			contador++; //atualiza cont
		break;
		case '2': 
			cardapio();
		break;
		
		default:
			printf("ipcao invalida\n");
			goto sacola;
		break;
	}
	
	escolha_intem:
	printf("deseja escolher outro item? 1- sim ou 2- ver sacola\n");
	
	cod_lanche = getch();
	
	switch(cod_lanche){
		case '1':
			cardapio();
		break;
		case '2':
			 sacola();
		break;
		default:
			printf("ipcao invalida\n");
			goto escolha_intem;
		break;	
	}
	
	printf("confirmar pedido? 1- sim / 2- canselar compra / 3- escolher mais intem\n");
 	op[0]= getch();
 	
 	switch(op[0]){
 		case'1':
 			gravar_arq();
		break;
	 }
	
}


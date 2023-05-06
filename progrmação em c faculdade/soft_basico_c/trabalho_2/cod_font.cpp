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

// ----------------- declaração de funções 
void menu(); void cardapio(); void imprimir(),alterar(),excluir();

// ----------------- declarações de variaveis 
int contador =0;
int cont_item =0;
char cliente [TAM_VET][TAM_CARC];
char op[1];
FILE *pont_arq;
FILE *Salva_cont;

// ----------------- declaração dos structs
struct tm *data_hora_atual;

struct items{
	int id;
	char descricao [TAM_CARC];
	int quantidade;
	float valor;
	float total;
};

struct pedido{
	int id;
	int qnt_item;
	char cliente[TAM_CARC];
	struct items item[TAM_VET];
};

struct pedido pedidos[TAM_VET];

// ----------------- funçao principal
int main(){
/*	char char_cont [3];
	Salva_cont = fopen("contador.txt", "r");
	
	if (Salva_cont == NULL){
    printf("variavel contador nao inicializada.\n");
    menu();
  	}
  	char_cont [0]= fgetc(Salva_cont);
  	fclose(Salva_cont);
  	contador = strtol(char_cont, NULL, 10);*/
  	//----------------- programa principal
	setlocale(LC_ALL, "Portuguese"); 
	menu();
	return (0);
}

 void menu(){
	setlocale(LC_ALL, "Portuguese");
 	while(true){
	
		system("cls");
		printf("contador= %i\n\n", contador);
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
				imprimir();
			break;
			
			case '3':
				alterar();
			break;
			
			case '4':
				excluir();
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
	float total_compra = 0;
	int erro;
	time_t segundos;
	time(&segundos);
	char char_cont [2];
	data_hora_atual = localtime(&segundos);
	
	while(pedidos[contador].cliente[0]=='\0'){ 
    printf("infrome o nome para proseguir o pedido: ");
    gets(pedidos[contador].cliente);
    if(pedidos[contador].cliente[0]=='\0') 
	printf(" Nome inválido \n"); 
	}
	pedidos[contador].id = contador;
	//sprintf(char_cont, "%d", contador);
	//strcat(pedidos[contador].cliente, char_cont);
	strcat(pedidos[contador].cliente, ".txt");

	// abrindo arquivo
	pont_arq= fopen(pedidos[contador].cliente, "w");
	
	fprintf(pont_arq, "nick cliente: %s\n", pedidos[contador].cliente);

	erro= fputs("|==========================================================|\n", pont_arq);
	  	  fputs("|                           pedido                         |\n", pont_arq);
	      fputs("|==========================================================|\n", pont_arq);
	      fputs("| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n", pont_arq);
	for(int i =0; i< cont_item; i++){
		fprintf(pont_arq, "| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[contador].item[i].id, pedidos[contador].item[i].descricao, 
		pedidos[contador].item[i].quantidade, pedidos[contador].item[i].valor, pedidos[contador].item[i].total);
		total_compra += pedidos[contador].item[i].total;
		
	}
 	fprintf(pont_arq, "| TOTAL DA COMPRA : %.2f\n\n", total_compra);
 	fprintf(pont_arq, "o CODIGO do pedido eh: %i\n", pedidos[contador].id);
 	
	// gravar data e hora;
	fprintf(pont_arq, "\nHora ...: %d:",data_hora_atual->tm_hour);//hora   
	fprintf(pont_arq, "%d:",data_hora_atual->tm_min);//minuto
	fprintf(pont_arq, "%d",data_hora_atual->tm_sec);//segundo 
	fputs("\t\t", pont_arq);
	fprintf(pont_arq, "Data ...: %d/", data_hora_atual->tm_mday);
	fprintf(pont_arq, "%d/",data_hora_atual->tm_mon+1); //mês
	fprintf(pont_arq, "%d\n\n",data_hora_atual->tm_year+1900); //ano
	

	if( erro == EOF){
		printf("Erro ao tentar gravar os dados! \n");
		printf("por favor, faca seu pedido novamente");
		system("pause");
		menu();
	}
   		
	fclose(pont_arq);
	// atualizando contador
	// procur a um pedido que n foi preenchido.
	contador++;
	cont_item =0;
	
	/*Salva_cont = fopen("contador.txt", "w");
	fprintf(Salva_cont, "%i", contador);
	fclose(Salva_cont);*/
	printf("obrigado por fazer pedido, agora eh so esperar.\n");
	system("pause");
}

void sacola(){ // chamar de sacola
	system("cls");
	float total_compra = 0;
	
	printf("|======================================================|\n"
		   "|                       SACOLA                         |\n"
		   "|======================================================|\n"
		   "| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n");
	for(int i =0; i< cont_item; i++){
		printf("| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[contador].item[i].id, pedidos[contador].item[i].descricao, 
		pedidos[contador].item[i].quantidade, pedidos[contador].item[i].valor, pedidos[contador].item[i].total);
		total_compra += pedidos[contador].item[i].total;
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
			strcpy(pedidos[contador].item[cont_item].descricao, "HAMBURG");
			valor = hamburg;
		break;
		
		case '2':
			system("cls");
			strcpy(pedidos[contador].item[cont_item].descricao, "MISTO");
			valor = misto;
		break;
		
		case '3':
			system("cls");
			strcpy(pedidos[contador].item[cont_item].descricao, "CACHORRO QUENTE");
			valor = cachorro;
		break;
		case '4':
			system("cls");
			strcpy(pedidos[contador].item[cont_item].descricao, "COCA-COLA");
			valor = coca;
		break;
		case '5':
			system("cls");
			strcpy(pedidos[contador].item[cont_item].descricao, "FANTA LATA");
			valor = fanta;
		break;
		case '6':
			system("cls");
			strcpy(pedidos[contador].item[cont_item].descricao, "X-TUDO");
			valor = xtudo;
		break;
		
		case ESC:
			menu();
		break;
	}
	
	printf("informe a quantidade de %s: ", pedidos[contador].item[cont_item].descricao);
	scanf("%i", &qnt_lanche);
	
	printf("%i %s \n", qnt_lanche, pedidos[contador].item[cont_item].descricao);
	printf("valor Unit..: %.2f\n", valor);
	printf("TOTAL..: %.2f\n", valor*qnt_lanche);
	
	sacola:
	printf("adicionar a sacola? 1- sim ou 2- nao\n");
	cod_lanche = getch();
	
	switch(cod_lanche){
		case '1':
			pedidos[contador].item[cont_item].quantidade = qnt_lanche;
			pedidos[contador].item[cont_item].valor= valor;
			pedidos[contador].item[cont_item].total = qnt_lanche*valor;
			pedidos[contador].item[cont_item].id = cont_item;
			cont_item++; //atualiza qnt_intens
			pedidos[contador].qnt_item= cont_item;
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
	confirmacao:
	printf("confirmar pedido? 1- sim / 2- canselar compra / 3- escolher mais intem\n");
 	op[0]= getch();
 	
 	switch(op[0]){
 		case'1':
 			gravar_arq();
 			menu();
		break;
		case'2':
			menu();
			contador--;
		break;
		case'3':
			cardapio();
		break;
		default:
			printf("opcao invalida, tente novamente\n\n");
			goto confirmacao; 
	 }
	
}

void imprimir(){
	system("cls");
	int pesquisa;
	int encontrou = 0;
	float total_compra = 0;
	
	printf("ID | Pedido\n");
	for(int i =0; i<contador; i++){
		printf(" %i \t %s \n",pedidos[i].id , pedidos[i].cliente);
	}
	printf("informe o id do pedido, listado no comprovante.");
	scanf("%i", &pesquisa);
	for(int i =0; i<contador; i++){ // repetir o codigo pq o index de pedidos teve que mudar.
		if(pesquisa ==pedidos[i].id){
			if(pedidos[i].cliente[0]=='\0'){
				printf("pedido inexistente.\n");
				printf("provavelmente seu pedido ja foi excluido");
				system("pause");
				menu();
			}
			printf("|======================================================|\n"
				   "|                        PEDIDO                        |\n"
				   "|======================================================|\n"
				   "| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n");
			for(int j =0; j< pedidos[i].qnt_item; j++){
				printf("| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[pesquisa].item[j].id, pedidos[pesquisa].item[j].descricao, 
				pedidos[pesquisa].item[j].quantidade, pedidos[pesquisa].item[j].valor, pedidos[pesquisa].item[j].total);
				total_compra += pedidos[pesquisa].item[j].total;
			}
		 	printf("| TOTAL DA COMPRA : %.2f\n\n", total_compra);
		 	encontrou =1;
		 	system("pause");
		 	break;
		}
	}
	
	if(encontrou == 0){
		printf("ID nao encontrado. Tente novamente.");
		system("pause");
		menu();
	}
	
}

void alterar(){
	system("cls");
	
	// variaveis da função
	int pesquisa;
	int id_item;
	char cod_lanche[2];
	float total_compra;
	float valor;
	int qnt_lanche;
	int erro;
	int encontrou =0;
	
	// lanches
	float hamburg = 5.50;
	float misto = 4.00;
	float cachorro= 4.00;
	float coca = 3.00;
	float fanta = 3.00;
	float xtudo = 10.00;
	
	// listando os pedidos 
	printf("deseja realemte alterar o pedido? 1- sim ou 2- nao");
	scanf("%i", &pesquisa);
	if(pesquisa==2 || pesquisa != 1)
		menu();
	printf("ID \t Pedido\n");
	for(int i =0; i<contador; i++){
		printf(" %i \t %s \n",pedidos[i].id , pedidos[i].cliente);
	}
	printf("informe o id do pedido, listado no comprovante.");
	scanf("%i", &pesquisa);
	// buscando os pedidos
	for(int i=0; i<contador; i++){
		if(pesquisa == pedidos[i].id){
			if(pedidos[i].cliente[0]=='\0'){
				printf("pedido inexistente.\n");
				printf("provavelmente seu pedido ja foi excluido");
				system("pause");
				menu();
			}
				
			encontrou =1;
			system("cls");
			printf("|======================================================|\n"
				   "|                        PEDIDO                        |\n"
				   "|======================================================|\n"
				   "| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n");
			for(int j =0; j< pedidos[i].qnt_item; j++){
				printf("| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[pesquisa].item[j].id, pedidos[pesquisa].item[j].descricao, 
				pedidos[pesquisa].item[j].quantidade, pedidos[pesquisa].item[j].valor, pedidos[pesquisa].item[j].total);
				total_compra += pedidos[pesquisa].item[j].total;
			}
			printf("total .....: %.2f\n\n", total_compra);
			printf("digite o id do item que deseja alterar");
			scanf("%i", &id_item);
			//busca o item do pedido para ser alterado
			for(int j =0; j< pedidos[i].qnt_item; j++){
				if(id_item == pedidos[i].item[j].id ){
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
					printf("ifmome para qual intem deseja mudar: ");
					cod_lanche [0]= getch();
					system("cls");
					switch(cod_lanche[0]){
						case '1':
							strcpy(pedidos[i].item[j].descricao, "HAMBURG");
							valor = hamburg;
						break;
						
						case '2':
							strcpy(pedidos[i].item[j].descricao, "MISTO");
							valor = misto;
						break;
						
						case '3':
							strcpy(pedidos[i].item[j].descricao, "CACHORRO QUENTE");
							valor = cachorro;
						break;
						case '4':
							strcpy(pedidos[i].item[j].descricao, "COCA-COLA");
							valor = coca;
						break;
						case '5':
							strcpy(pedidos[i].item[j].descricao, "FANTA LATA");
							valor = fanta;
						break;
						case '6':
							strcpy(pedidos[i].item[j].descricao, "X-TUDO");
							valor = xtudo;
						break;	
					}
					
					printf("informe a quantidade de %s: ", pedidos[i].item[j].descricao);
					scanf("%i", &qnt_lanche);
					
					pedidos[i].item[j].quantidade = qnt_lanche;
					pedidos[i].item[j].valor= valor;
					pedidos[i].item[j].total = qnt_lanche*valor;
					
					// salavar item alterado no pedido
					// abrindo arquivo
					pont_arq= fopen(pedidos[i].cliente, "w");
					
					fprintf(pont_arq, "nick cliente: %s\n", pedidos[contador].cliente);

					erro= fputs("|==========================================================|\n", pont_arq);
					  	  fputs("|                           pedido                         |\n", pont_arq);
					      fputs("|==========================================================|\n", pont_arq);
					      fputs("| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n", pont_arq);
					for(int j =0; j<pedidos[i].qnt_item; j++){
						fprintf(pont_arq, "| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[i].item[j].id, pedidos[i].item[j].descricao, 
						pedidos[i].item[j].quantidade, pedidos[i].item[j].valor, pedidos[i].item[j].total);
						total_compra += pedidos[contador].item[i].total;
						
					}
				 	fprintf(pont_arq, "| TOTAL DA COMPRA : %.2f\n\n", total_compra);
				 	fprintf(pont_arq, "o CODIGO do pedido eh: %i\n", pedidos[i].id);
				 	
					// gravar data e hora;
					fprintf(pont_arq, "\nHora ...: %d:",data_hora_atual->tm_hour);//hora   
					fprintf(pont_arq, "%d:",data_hora_atual->tm_min);//minuto
					fprintf(pont_arq, "%d",data_hora_atual->tm_sec);//segundo 
					fputs("\t\t", pont_arq);
					fprintf(pont_arq, "Data ...: %d/", data_hora_atual->tm_mday);
					fprintf(pont_arq, "%d/",data_hora_atual->tm_mon+1); //mês
					fprintf(pont_arq, "%d\n\n",data_hora_atual->tm_year+1900); //ano
					
				
					if( erro == EOF){
						printf("Erro ao tentar gravar os dados! \n");
						printf("por favor, faca seu pedido novamente");
						system("pause");
						menu();
					}
				   		
					fclose(pont_arq);
					
					// exibindo peddido alterado;
					printf("|======================================================|\n"
						   "|                        PEDIDO                        |\n"
						   "|======================================================|\n"
						   "| ID |  DESCRICAO   |  QUANTIDADE  | VALOR UNIT  |  TOTAL  |\n");
					for(int j =0; j< pedidos[i].qnt_item; j++){
						printf("| %i   %s \t  \t \t %i \t  %.2f \t \t%.2f \t\n", pedidos[pesquisa].item[j].id, pedidos[i].item[j].descricao, 
						pedidos[pesquisa].item[j].quantidade, pedidos[pesquisa].item[j].valor, pedidos[pesquisa].item[j].total);
						total_compra += pedidos[pesquisa].item[j].total;
					}
					printf("total .....: %.2f\n\n", total_compra);
					
					system("pause");
				}
			}
			
			
		}		
	}
	if(encontrou==0){
		printf("id nao encontrado. tente novamente");
		menu();
	}
}

void excluir(){
	int pesquisa;
	int encontrou;
	
	system("cls");
	printf("deseja realemte excluir o pedido? 1- sim ou 2- nao");
	scanf("%i", &pesquisa);
	if(pesquisa==2 || pesquisa != 1)
		menu();
	printf("ID \t Pedido\n");
	
	for(int i =0; i<contador; i++){
		printf(" %i \t %s \n",pedidos[i].id , pedidos[i].cliente);
	}
	printf("informe o id do pedido, listado no comprovante.");
	scanf("%i", &pesquisa);
	
	for(int i=0; i<contador; i++){
		if(pesquisa == pedidos[i].id){
			encontrou=1;
			for(int j=0; j<pedidos[i].qnt_item; j++){
				strcpy(pedidos[i].cliente, "");
				pedidos[i].id=1000;
				pedidos[i].qnt_item= 0;
				strcpy(pedidos[i].item[j].descricao, " ");
				pedidos[i].item[j].id=1000;
				pedidos[i].item[j].quantidade= 0;
				pedidos[i].item[j].total= 0;
				pedidos[i].item[j].valor= 0;
				remove(pedidos[i].cliente);
			}
			
		}
	}
	
	if(encontrou==0){
		printf("id nao encontrado. tente novamente");
		menu();
	}
	
	printf("intem excluido com sucesso\n");
	system("pause");
		
}


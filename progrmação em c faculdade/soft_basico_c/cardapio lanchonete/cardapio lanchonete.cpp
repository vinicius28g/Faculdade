#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <conio.h>
#include<string.h>

int Cod_Produto, op, qnt, qnt_lanches;
int qnt_produto [8];
int l= 1; // variavel do loop infinito
int visu=0; //  decido se salva ou não o pupom.
float valor, total_item, preco_total;
char cliente[40][50];
int contador =0;
//char tipo_arq[] = ".txt";
char texto_str[10000]; // variavel que vai carregar o texto para leitura;

// valores dos laches
float hamburg = 5.50;
float misto = 4.00;
float cachorro= 4.00;
float coca = 3.00;
float fanta = 3.00;
float xtudo = 10.00;

FILE *pont_arq;
char cod_pedido[40];


void MenuPrincipal(){
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	printf("seja bem vindo %s\n", cliente[contador-1]);
	printf("|============================================|\n"
		   "|                 COMEU MORREU               |\n"
		   "|--------------------------------------------|\n"
		   "|      1- fazer Pedido| 2 - imp. Cumpom      |\n"
		   "|      3 Alt. Pedido  | 4-  Consultar        |\n"
		   "=============================================|\n"
		   "seleione a opção desejada ou 5 para sair: ");
	scanf("%i", &op);
}

void cardapio(){
	qnt=0;
	
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	printf("ola, me inforem o seu nome para proceguir o pedido: ");
	scanf("%s",cliente[contador]);
	contador++;
	
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
	printf("Escolha o codigo de um produto: ");
	scanf("%i", &Cod_Produto);
		   
		   switch(Cod_Produto){
		   		case 1:{
					printf("hambuerg\n");
		   			valor= 5.5;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("hambuerg\n");
		   			printf("\ninforme a quantidade: ");
		   			scanf("%i", &qnt);
		   			qnt_produto[0] = qnt;
		   			break;
				   }
		   			
		   		case 2:{
		   			printf("MISTO\n");
		   			valor= 4;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("MISTO\n");
		   			printf("informe a quantidade: ");
		   			scanf("%i", &qnt);
		   			qnt_produto[1] = qnt;
		   		break;
				   }
		   			
		   		case 3:
		   			printf("CACHORRO- QUENTE\n");
		   			valor= 4;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("CACHORRO- QUENTE\n");
		   			printf("informe a quantidade: ");
		   			scanf("%i", &qnt);
		   			qnt_produto[2] = qnt;
		   		break;
				   
		   			
		   		case 4:
					printf("COCA-COLA\n");
		   			valor= 3;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("COCA-COLA\n");
		   			printf("informe a quantidade: ");
		   			scanf("%i", &qnt);
					qnt_produto[3] = qnt;
		   		break;
				   
		   			
		   		case 5:{
		   			printf("FANTA LATA\n");
		   			valor= 5.5;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("FANTA LATA\n");
		   			printf("informe a quantidade: ");
		   			scanf("%i", &qnt);
		   			qnt_produto[4] = qnt;
		   		break;
				   }
		   			
		   		case 6:{
		   			printf("X- TUDO\n");
		   			valor= 10;
		   			printf("digite 2 para volta e cancelar o item ou 0 para continuar: ");
		   			scanf("%i", &op);
		   			if(op==2){
		   				cardapio();
					   }
					system("cls");
					printf("X- TUDO\n");
		   			printf("informe a quantidade: ");
		   			scanf("%i", &qnt);
		   			qnt_produto[5] = qnt;
		   		break;
				   }		
		   }
		   printf("deseja pedir mais algun intem? digete 1- Sim ou 2- não: ");
		   scanf("%i", &op);
		   
		   if(op==1){
		   		system("cls");
		   		cardapio();
		   }

}
void salvar_Arquivo(){
	
	pont_arq = fopen(cliente[contador-1], "w");
		// escrevendo o cumpom no arquivo txt.
			    fputs("|=========================================================|\n"
		              "|		CONFRIA SEU PUPOM		  	  |\n"
		              "|=========================================================|\n",pont_arq);
	fprintf(pont_arq, "| Qnt. Hamburg :%i           || valor Unit: R$ %.2f\n",  qnt_produto[0], hamburg);
	fprintf(pont_arq, "| Qnt. Misto :%i             || valor Unit: R$ %.2f\n", qnt_produto[1], misto);
	fprintf(pont_arq, "| Qnt. Cachorro-Quente :%i   || Valor Unit: R$ %.2f\n", qnt_produto[2], cachorro);
	fprintf(pont_arq, "| Qnt. Coca-cola LATA :%i    ||Valor Unit: R$ %.2f\n",qnt_produto[3], coca);
	fprintf(pont_arq, "| Qnt. Fanta Laranja LATA :%i|| Valor Unit: R$ %.2f\n", qnt_produto[4], fanta);
	fprintf(pont_arq, "| Qnt. X-TUDO :%i            ||Valor Unit: R$ %.2f\n", qnt_produto[5], xtudo);
				fputs("|========================================================|\n",pont_arq);
				fputs("|			TOTAIS				 |\n",pont_arq);
				fputs("|========================================================|\n",pont_arq);
	 fprintf(pont_arq,"| Total item  : R$ %.2f\n", total_item);
	 fprintf(pont_arq,"| Tota a pagar                        : R$ %.2f\n", preco_total);
				fputs("|========================================================|\n",pont_arq);
				fputs("|          OBRIGADO PELA PREFERÊNCIA   	    ay     |\n",pont_arq);
				fputs("|=========================================================|\n",pont_arq);
	//file close	   
	fclose(pont_arq);
}

void visualizarCumpom(){
	setlocale(LC_ALL, "Portuguese");
	
//	strcat(cliente[contador-1], ".txt"); // soma as strings

	system("cls");

	printf("|=========================================================|\n"
		   "|		CONFRIA SEU PUPOM		  	  |\n"
		   "|=========================================================|\n");
	printf("| Qnt. Hamburg :%i           || valor Unit: R$ %.2f\n",  qnt_produto[0], hamburg);
	printf("| Qnt. Misto :%i             || valor Unit: R$ %.2f\n",  qnt_produto[1], misto);
	printf("| Qnt. Cachorro-Quente :%i   || Valor Unit: R$ %.2f\n", qnt_produto[2], cachorro);
	printf("| Qnt. Coca-cola LATA :%i    ||Valor Unit: R$ %.2f\n", qnt_produto[3], coca);
	printf("| Qnt. Fanta Laranja LATA :%i|| Valor Unit: R$ %.2f\n", qnt_produto[4], fanta);
	printf("| Qnt. X-TUDO :%i            ||Valor Unit: R$ %.2f\n", qnt_produto[5], xtudo);
	printf("|========================================================|\n"
		   "|			TOTAIS				 |\n"
		   "|========================================================|\n");
	printf("| Total item  : R$ %.2f\n", total_item);
	preco_total= (qnt_produto[0]*hamburg)+(qnt_produto[1]*misto)+(qnt_produto[2]*cachorro)+(qnt_produto[3]*coca)+
	(qnt_produto[4]*fanta)+(qnt_produto[5]*xtudo);
	printf("| Tota a pagar                        : R$ %.2f\n", preco_total);
	printf("|========================================================|\n"
		   "|          OBRIGADO PELA PREFERÊNCIA   	         |\n"
		   "|=========================================================|\n");
	if(visu==0)
		salvar_Arquivo();
		   	   
	system("pause");
	for(int i=0; i<6; i++)
		qnt_produto[i]=0;
	
}


void alterar_pedido(){
	system("cls");
	
	for(int c=0; c<contador;c++){
		printf("%i - %s\n",c+1, cliente[c]);
	}
	
	printf("digite o nome do pedido: ");
	scanf("%s", cod_pedido);
	
	//strcat(cod_pedido, ".txt");
	
	for(int c=0; c<contador;c++){
		if(strcmp(cod_pedido,cliente[c] )==0 ){
			
			pont_arq = fopen(cliente[c], "r");
			
			while(fgets(texto_str, 20, pont_arq) != NULL){
				printf("%s", texto_str);
			}
			printf("\n\n");
			printf("OBS: caso deseje alterar o pedido voce tera que refazelo.\n");
			printf("deseja alterar ou excluir o pedido? 1-sim 2-nao: ");
			scanf("%i", &op);
			if(op==1){
				remove(cliente[c]);
				MenuPrincipal();
			}else
				MenuPrincipal();
  			//fechando o arquivo
  			fclose(pont_arq);
  
  			system("pause");
		}
		
	}
}

void consulta(){
		
		for(int c=0; c<contador;c++){
		printf("%i - %s\n",c+1, cliente[c]);
		}
	
		printf("digite o nome do pedido: ");
		scanf("%s", cod_pedido);
		
		for(int c=0; c<contador;c++){
			if(strcmp(cod_pedido,cliente[c] )==0 ){
				pont_arq = fopen(cliente[c], "r");
				while(fgets(texto_str, 20, pont_arq) != NULL){
					printf("%s", texto_str);
				}
				//fechando o arquivo
  				fclose(pont_arq);
				system("pause");	
			}
		}
		MenuPrincipal();
	
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	do{
		MenuPrincipal();
	
		switch (op){
			case 1:{
				cardapio();
				visualizarCumpom();
				break;
			}
			case 2:{
				visu=1;
				visualizarCumpom();
				break;
			}
			case 3:{
				alterar_pedido();
				break;
			}
			case 4:{
				consulta();
				break;
			}
		}
	}while(l>0);
	

	
}
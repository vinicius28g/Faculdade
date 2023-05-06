
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// questão 1- alterando o valor das variaveis com ponteiros.
int loop =1; // deixar o switch infinito
int opcao;

int questao1(){
	int a, af, *apont;
	float b, bf, *bpont;
	char c = 'z', cf = 'b', *cPont;	
	
	printf("modificar o valor das variaves dos tipos int, float e char com ponteiros\n");
	printf("escreva uma numero inteiro: ");
	scanf("%i", &a);
	printf("escreva uma numero float: ");
	scanf("%f", &b);
	
	apont = &a;
	af = *apont;
	bpont = &b;
	bf = *bpont;
	cPont= &c;
	*cPont= 'a';
	
	printf("escreva os valores para serem substituido.\n");
	printf("escreva um numero int para susbstituir %i: ", af);
	scanf("%i", &a);
	printf("escreva um numero float para susbstituir %.2f: ", bf);
	scanf("%f", &b);
	system("cls");
	printf("letra antiga: %c letra nova: %c\n",c, cf);
	printf("numero antigo: %i numero novo: %i\n",af, a);
	printf("numero antigo: %.2f numero novo: %.2f\n",bf, b);
	system("pause");
}

int questao2(){
	// defini qual variavel é maior por ponteiro
	int n1 = 1, n2 = 2;
	int *pont1, *pont2;
	
	pont1= &n1;
	pont2= &n2;
	
	if(*pont1 > *pont2){
		printf("o maior numero eh: %i\n", *pont1);
	}else{
		printf("o maior numero eh: %i\n", *pont2);
	}
	system("pause");
}

int questao3(){
	// pergunta quantos numeros serão comparados e retorna o maior numero entre os citados.
	
	int quant_n, erro_min= -2147483648, erro_max= 2147483647; // limite das variaveis inteiras 
	// os limites servem para n gerar overflow das variaveis e da erro no codigo.
	int maiorN = erro_min; // maior numero recebe erro minimo para poder salvar o primeiro numero e ir comparando.
	int *pontn, *num2;
	pontn= &maiorN;
	
	printf("quantos numeros serao comparados? ");
	scanf("%i", &quant_n);
	
	int nums [quant_n];
	
	for(int i =0; i<quant_n; i++){
			Erro:
			printf("digite o %i numero inteiro: ", i+1);
			scanf("%i", &nums[i]);
			num2= &nums[i];
			
			if(nums[i] > erro_min && nums[i] < erro_max){
				if(*num2 > *pontn){ //verifica se o numero informado é maior que o numero mais baixo aceitavel,
					*pontn= *num2; // para ele poder entra na primeira vez, e verificar nas proximas vezes 
									//se o numero informado foi maior que o maior numero resgistrado
				}
			}else{
				printf("Erro! Numero muito pequeno.\n");
				printf("Por favor, digiete outro numero\n");
				goto Erro;
			}
			
			
	}
	
	printf("o maior numero eh: %i\n", *pontn);
	system("pause");
}


int main(void){

	do{
		system("cls");
		printf("escolha uma quetao\n");
		printf("1- questao 1\n");
		printf("2- questao 2\n");
		printf("3- questao 3\n");
		scanf("%i", &opcao);
		switch(opcao){
			case 1:
				system("cls");
				questao1();
				system("cls");
			break;
		
			case 2:
				system("cls");
				questao2();
				system("cls");
			break;
			
			case 3:
				system("cls");
				questao3();
				system("cls");
			break;
			
			default:
				printf("opcao invalida");
			break;
		}

	}while(loop ==1);
	
}

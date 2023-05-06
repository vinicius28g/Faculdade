#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
//############################## Quatão1 ######################################
int questao1(){
		int num;
	printf("\t\tRetorna o sucessor e o antecessor de um numero.\n");
	printf("\tEscreva um valor inteiro:\n");
	scanf("%i", &num);
	printf("Sucessor: %i\n", num+1);
	printf("Antecessor: %i\n", num-1);
}//-------------------------- fim-----------------------------------------------
//########################## Questão2 ########################################
int questao2(){
	float altura, largura;
	
	printf("Retorna a area de um triangulo.\n");
	printf("Informe a altura: ");
	scanf("%f", &altura);
	printf("Informe a largura: ");
	scanf("%f", &largura);
	
	printf("A area eh: %f\n", largura*altura);
}//------------------------ fim ---------------------------------------------

// ###################### Questão_3 #########################################
int questao3(){
	int ano_at, mes_at, dia_at;
	int ano_an, mes_an, dia_an;
	int ano_final, mes_final, dia_final;
	
	printf("Retorna a idade em dias.\n");
	printf("Informe a data atual em numeros.\n");
	printf("ano: ");	scanf("%d", &ano_at);
	printf("mes: ");	scanf("%d", &mes_at);
	printf("dia: ");	scanf("%d", &dia_at);

	printf("Informe a data a do seu aniversaio.\n");
	printf("ano: ");    scanf("%d", &ano_an);
	printf("mes: ");	scanf("%d", &mes_an);
	printf("dia: ");	scanf("%d", &dia_an);
				
	ano_final= ano_an - ano_at;
	mes_final= mes_an - mes_at;
	dia_final= dia_an - dia_at;
	if(ano_final<0)
		ano_final *= -1;
	if(mes_final<0)
		mes_final *= -1;
	if(dia_final<0)
		dia_final *= -1;
				
	printf("Sua idade em dias eh: %d dias\n", ano_final*360 + mes_final*30 +dia_final);
}//----------------------------------- fim ---------------------------------------

// ################################### Questão_4 ##################################
int questao4(){
	int voto, branco=0, nulo=0, valido=0;
	float po_branco, po_nulo, po_valido;
	int qnt_votos;
	fu:
	printf("Retorna a porcentagem de votos\n");
	printf("Digite o seu voto\n");
	printf("1- Branco\n"
			"2- Nulo\n"
			"3- Valido\n"
			"4- Sair\n");
	scanf("%i", &voto);
	switch(voto){
		case 1: 
			branco++;
			qnt_votos++;
			system("cls");
			goto fu;
			break;
		case 2:
			nulo++;
			qnt_votos++;
			system("cls");
			goto fu;
			break;
		case 3:
			valido++;
			qnt_votos++;
			system("cls");
			goto fu;
			break;
	}
	po_branco= (100*branco)/ qnt_votos;
	po_nulo= (100*nulo)/qnt_votos;
	po_valido= (100*valido)/qnt_votos;
	printf("A quantidade de eleitores foi: %i\n", qnt_votos);
	printf("votos brancos: %i \t porcentagem: %.2f\n",branco, po_branco);
	printf("votos nulo: %i  \t porcentagem: %.2f\n",nulo, po_nulo);
	printf("votos valido: %i \t porcentagem: %.2f\n", valido, po_valido);

}// ----------------------------------- fim ---------------------------------------

//################################ Questão_5 ######################################
int questao5(){
	float salario_atual, reajuste;
	printf("Informa o reajuste de um slario\n");
	printf("Digite o seu salario atual: ");
	scanf("%f", &salario_atual);
	printf("Digite o reajuste em porcentagem: ");
	scanf("%f", &reajuste);
	
	printf("seu salario final eh: %.2f\n", salario_atual+salario_atual*(reajuste/100));
}//----------------------------------fim -------------------------------------------

//################################### Questão_6 ####################################
int questao6(){
	float fabricacao, distribuidor, imposto;
	printf("Retorna o preco de um carro\n");
	printf("Informe o preco de fabricacao do carro: ");
	scanf("%f",&fabricacao);
	distribuidor = fabricacao+ fabricacao* 0.25;
	imposto= fabricacao+ fabricacao* 0.45;
	printf("O valor do carro eh: %.2f\n", distribuidor+imposto);
}// ------------------------------------fim-----------------------------------------

//################################# Questão_7 ####################################
int questao7(){
	
	float salario_fixo,vendas, comissao;
	int carros_vendidos;
	printf("Salario final de um vendedor de carro\n");
	printf("Digite o seu salario fixo: ");  scanf("%f", &salario_fixo);
	printf("Quantos carro voce vendeu? ");  scanf("%i", &carros_vendidos);
	printf("Informe o valor das suas vendas: "); scanf("%f", &vendas);
	comissao= carros_vendidos*100+ vendas*0.05;
	printf("O seu salario final eh: %.2f\n", salario_fixo+ comissao);
}//-----------------------------fim------------------------------------------------

//############################### Questão_8 #######################################
int questao8(){
	float Fahrenheit, celcius;
	printf("Transforma de Fahrenheit para celsius\n");
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &Fahrenheit);
	celcius= (Fahrenheit - 32)/9 *5;
	printf("C temperatura em calcius eh: %.2f (c)\n", celcius);
}//---------------------------- fim -----------------------------------------------

//############################# questão 9 ########################################
int questao9(){
	int macas;
	printf("Calcula o preco de macas\n");
	printf("Quantas macas voce deseja levar: ");
	scanf("%i", &macas);
	if(macas>=12){
		printf("A sua compra deu: %i\n", macas*1);
	}else{
		printf("a sua compra deu: %.2f\n", macas*1.30);
	}
}// -----------------------------fim---------------------------------------------

//############################ questão 10 #######################################
int questao10(){
	int ano_at, mes_at, dia_at;
	int ano_an, mes_an, dia_an;
	int ano_final, mes_final, dia_final;
	
	printf("Retorna se voce pode votar ou nao\n");
	printf("Informe a data atual em numero\n");
	printf("ano: ");	scanf("%d", &ano_at);
	printf("mes: ");	scanf("%d", &mes_at);
	printf("dia: ");	scanf("%d", &dia_at);

	printf("Informe a data a do seu aniversaio\n");
	printf("ano: ");    scanf("%d", &ano_an);
	printf("mes: ");	scanf("%d", &mes_an);
	printf("dia: ");	scanf("%d", &dia_an);
	
	ano_final= ano_an - ano_at;
	mes_final= mes_an - mes_at;
	dia_final= dia_an - dia_at;
	if(ano_final<0)
		ano_final *= -1;
	if(mes_final<0)
		mes_final *= -1;
	if(dia_final<0)
		dia_final *= -1;
	if(ano_final*360 + mes_final*30 +dia_final>=5770){
		printf("Voce pode votar!\n");
	}else{
		printf("Infelizmente voce nao pode votar anida!\n");
	}
}// ------------------------------ fim -----------------------------------------------

//#################################### questão 11 ######################################
int questao11(){
	int inicio_h,inicio_m, fim_h,fim_m, aux_h, aux_m;
	
	printf("Informa a duaração de um jogo de xadrez\n");
	printf("OBS: informe a hora no formate de 24 horas e sem espaco, por exemplo 14\n");
	printf("Infrome o hora de inicio do jogo:\n");
	scanf("%i", &inicio_h);
	printf("Informe os minutos:\n");
	scanf("%i", &inicio_m);
	printf("Informe a hora que o jogo acabou:\n");
	scanf("%i", &fim_h);
	printf("Informe os minutos:\n");
	scanf("%i", &fim_m);

	if(inicio_h>=18 && inicio_h<=24 && fim_h>=1 && fim_h<=6){
		inicio_h= inicio_h -24;	
		
		if(inicio_h<0){
			inicio_h*=-1;
		}
		aux_h= fim_h+ inicio_h;
	}else{
		aux_h= fim_h- inicio_h;
	}
	
	if(aux_h<0){
		aux_h*=-1;
	}
	
	aux_m= fim_m- inicio_m;
	if(aux_m<0){
		aux_m*=-1;
	}
	
	printf("A duracao do jogo foi: %i h: %i m\n", aux_h, aux_m);
	
}//-------------------------------- fim ------------------------------------------

//################################ questão 12 ####################################
int questao12(){
	int h_trabalho,h_extra= 0;
	float salario_final, s_trabalho, reajuste;
	
	printf("Retorna o seu salario com hora extra se tiver.\n");
	printf("Informe quantas horas voce trabalhou no mes.\n");
	scanf("%i",& h_trabalho);
	printf("Informe o seu salario por hora trabalhada.\n");
	scanf("%f",& s_trabalho);
	
	salario_final= s_trabalho*h_trabalho;
	
	if(h_trabalho>40){
		h_extra= h_trabalho -40;
		reajuste= h_extra*(s_trabalho*0.5);
		salario_final= s_trabalho*40 + reajuste;
	}
	printf("Seu salario final eh: %.2f\n", salario_final);
	if(h_extra>=1){
		printf("Voce teve %i de hora extra ganhando %.2f\n", h_extra, reajuste);
	}
}// ------------------------------- fim ------------------------------------------

//############################### Questão 13 #####################################
int questao13(){
	float salario_fixo, reajuste, vendas;
	printf("Informa o salario com reajuste de 3/100 ate 1.500 e 5/100 para o que passar\n");
	printf("Informe o valor do seu salario fixo.\n");
	scanf("%f", &salario_fixo);
	printf("Digite o valor das suas vendas\n");
	scanf("%f", &vendas);
	if(vendas<1500){
		salario_fixo= salario_fixo +(vendas * 0.03);
	} else if(vendas>=1500){
		reajuste= vendas-1500;
		salario_fixo= salario_fixo+ (vendas * 0.03) +(reajuste *0.05);
	}
	printf("O seu slario final eh: %.2f\n", salario_fixo);
}// -------------------------------- fim--------------------------------------------

//################################ questão 14 ######################################
int questao14(){
	int num_conta;
	float saldo, debito, credito, resultado;
	
	printf("Informa se o salso eh positivo ou negativo\n");
	
	printf("Informe o numero da sua conta: ");	scanf("%i", &num_conta);
	printf("Informe o seu saldo: ");			scanf("%f", &saldo);
	printf("Informe o seu debito: ");			scanf("%f", &debito);
	printf("I o seu credito: ");			scanf("%f", &credito);
	resultado= saldo-debito+credito;
	if(resultado>0){
		printf("Conta: %i\n",num_conta);
		printf("O seu saldo eh positivo sendo: %.2f\n", resultado);
	} else{
		printf("Conta: %i\n",num_conta);
		printf("O seu saldo eh negativo sendo: %.2f\n", resultado);
	}
}// ------------------------------- fim ----------------------------------

//############################# Questão 15 ####################################
int questao15(){
	int estoque_at, maximo_st, minimo_st;
	float media;
	printf("Informa se deve ser comprado ou nao um porduto em estoque\n");
	printf("Informe o quantidade atual no estoque\n"); 	
	scanf("%i", &estoque_at);
	printf("Informe o maximo de produdto que pode ter no esotque\n");
	scanf("%i", &maximo_st);
	printf("Informe o minino de produto que pode ter no estoque\n");
	scanf("%i", &minimo_st);
	
	media= (maximo_st + minimo_st)/2;
	if(media>= estoque_at){
		printf("Nao efetuar compra\n");
		printf("Estoque atual: %i\n", estoque_at);
		printf("Media do estoque: %.2f\n", media);
	}else{
		printf("Efetuar compra\n");
		printf("Estoque atual: %i\n", estoque_at);
		printf("Media do estoque: %.2f", media);
	}
}
int main(){
	int menu [3][5], m=1;
	int opcao;
	
	for(int l =0; l<3; l++){
		for(int c= 0; c<5; c++){
			menu[l][c]= m;
			m++;
		}
		
	}
	aqui:
	printf("\n");
	printf("\t\t==========================================\n");
	printf("\t\t||   |\\     /| |==== |\\   | |    |    ||\n");
	printf("\t\t||   | \\   / | |==== | \\  | |    |    ||\n");
	printf("\t\t||   |  \\ /  | |==== |  \\ | |====|    ||\n");
	printf("\t\t==========================================\n");
	printf("\n");
	for(int l =0; l<3; l++){
		printf("\t\t");
		for(int c= 0; c<5; c++){
			printf("%i\t||", menu[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\t1 - Retorna o sucessor e o antecessor de um numero\n");
	printf("\t2 - Retorna a area de um triangulo\n");
	printf("\t3 - Retorna a idade em dias\n");
	printf("\t4 - Retorna a porcentagem de votos\n");
	printf("\t5 - Informa o reajuste de um slario\n");
	printf("\t6 - Retorna o preco de um carro\n");
	printf("\t7 - Salario final de um vendedor de carro\n");
	printf("\t8 - Transforma de Fahrenheit para celsius\n");
	printf("\t9 - Calcula o preco de macas\n");
	printf("\t10- Retorna se voce pode votar ou nao\n");
	printf("\t11- Informa a duaração de um jogo de xadrez\n");
	printf("\t12- Retorna o seu salario com hora extra se tiver.\n");
	printf("\t13- Informa o salario com reajuste de 3/100 ate 1.500 e 5/100 para o que passar\n");
	printf("\t14- Informa se o salso eh positivo ou negativo\n");
	printf("\t15- Informe se deve ser comprado ou nao um porduto em estoque\n\n");
	printf("\tescolha uma opcao: ");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			system("cls");
			questao1();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 2:
			system("cls");
			questao2();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 3:
			system("cls");
			questao3();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 4:
			system("cls");
			questao4();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 5:
			system("cls");
			questao5();
			system("pause");
			system("cls");
			goto aqui;
			break;
			
		case 6:
			system("cls");
			questao6();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 7:
			system("cls");
			questao7();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 8:
			system("cls");
			questao8();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 9:
			system("cls");
			questao9();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 10:
			system("cls");
			questao10();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 11:
			system("cls");
			questao11();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 12:
			system("cls");
			questao12();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 13:
			system("cls");
			questao13();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 14:
			system("cls");
			questao14();
			system("pause");
			system("cls");
			goto aqui;
			break;
		case 15:
			system("cls");
			questao15();
			system("pause");
			system("cls");
			goto aqui;
			break;
	}
}

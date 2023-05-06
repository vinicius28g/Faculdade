/*
  Nome: Cadastro de Alunos
  Copyright: ESTACIO
  Data: 23/10/22 15:00 PM
  Descrição: Permite cadastrar, alterar, excluir, visualizar dados de alunos e separá-los por turma
*/

#include <stdio.h> //gets
#include <stdlib.h> // atoi
#include <conio.h> // getch
#include <string.h> // strcpy, strlen
#include <ctype.h> // islower, toupper
#include <locale.h> // setlocale

#define ESC 27
#define T1 100
#define T2 50

typedef struct Aluno //estrutura 'Aluno'
{
    int id;
    int nascimento;
    char sexo;
    char nome[T2];
    char naturalidade[T2];
};

Aluno aluno[T1]; //variável vetor 'aluno' do tipo 'Aluno'

//protótipos das funções
void menu(); void Cadastrar(); void listar(); 
 char data(int); 

main()
{
    setlocale(LC_ALL, "Portuguese");    
    menu(); //chamada da função principal
}

void Cadastrar() //armazena alunos
{
    int n;
    char ch;
    
    do
    {
        system("cls");
        printf("\a");
        //percorre o vetor para encontrar a primeira posição livre
        for(n=0; n<T1; n++){
            if(aluno[n].nome[0] == '\0')
            {
                break;
            }
        }
        //parte da entrada de dados do usuário
        printf("- Menu > Cadastrar -\n\n");
        char c;
        char temp[10];
        while(aluno[n].nome[0]=='\0'){ 
		     printf(" Nome do aluno(a): "); 
		     gets(aluno[n].nome);
            if(aluno[n].nome[0]=='\0') 
			printf(" Nome inválido \n"); 
	   }
        while(aluno[n].sexo=='\0'){ 
		    printf(" Sexo (M-F): "); 
		    gets(temp); c = temp[0]; 
		  if(islower(c)) c = toupper(c);
            if(c!='F' && c!='M') c = '\0'; 
			    aluno[n].sexo = c; 
			if(aluno[n].sexo=='\0') 
			    printf(" Sexo inválido \n"); }
        while(aluno[n].nascimento<1000000){ 
		     printf(" Data de nascimento (DDMMAAAA): "); 
			 gets(temp); aluno[n].nascimento = atoi(temp);
            if(aluno[n].nascimento<1000000) 
			printf(" Data inválida \n"); 
			}
        while(aluno[n].naturalidade[0]=='\0'){ 
		     printf(" Naturalidade: "); 
			 gets(aluno[n].naturalidade);
            if(aluno[n].naturalidade[0]=='\0') 
			printf(" Naturalidade inválida \n"); 
			}
        aluno[n].id = n+1;
        //fim do cadastro
        printf("\n- Cadastro N. %03d concluído -",  aluno[n].id);
        ch = 'x';
        printf("\n (\'s\' - novo cadastro / 'Enter' - voltar ao menu) ");
        ch = getch();
    }
    while(ch=='s' || ch=='S');
}

void listar() //imprime lista com todos os alunos
{
    system("cls");
    printf("\a");
    printf("- Menu > Visualizar -\n");
    //verifica se exitem alunos no vetor
    for(int i=0; i<T1; i++)
    {
        if(aluno[i].nome[0]!='\0')
            break;
        else if(aluno[i].nome[0]=='\0' && i==T1-1)
        {
            printf("\n- Nenhum aluno cadastrado. -\n (\'Enter\' - voltar ao menu) ");
            getch();
            return;
        }
    }
    //imprime a lista
    printf("===========================================================================\n");
    printf("|              Relacao de Alunos por Data de Nascimento                 |\n");
    printf("===========================================================================\n");
    printf("\n- Cod.\t- Nome\t\t\t- Data de nascimento -");    
    for(int i=0; i<T1; i++)
    {
        if(aluno[i].nome[0]!='\0')
        {
            printf("\n  n%02d\t", aluno[i].id);
            if(strlen(aluno[i].nome)>5 && strlen(aluno[i].nome)<14)
                printf("  %s\t\t  ", aluno[i].nome);
                
            else if(strlen(aluno[i].nome)>13 && strlen(aluno[i].nome)<22)
                printf("  %s\t  ", aluno[i].nome);
                
            else if(strlen(aluno[i].nome)>=23)
                printf("  %s ", aluno[i].nome);
                
            else if(strlen(aluno[i].nome)>21)
                printf("  %s  ", aluno[i].nome);
                
            else
                printf("  %s\t\t\t  ", aluno[i].nome);
                
            data(aluno[i].nascimento);
        }
    }
    printf("\n==========================================================================\n");
    printf("|              Numero de Pag. -1-                                        |\n");
    printf("==========================================================================\n");
    printf("\n\n (\'Enter\' - voltar ao menu) ");
    getch();
}

char data(int i) //retorna data formatada em printf
{
    int a, b, c;
    a = i/1000000;
    b = i/10000%100;
    c = i%10000;
    return printf("%02d/%02d/%04d", a, b, c);
}
void menu() //menu principal
{
    char ch;
    while(true)
    {
        system("cls");
        printf("\a");
        printf("|=======================================================|\n"); 
		printf("|                   MENU DE OPERACOES                   |\n");
		printf("|   1 - Cadastrar        |      2-Listar                |\n");
        printf("|=======================================================|\n"); 
	    printf("|                   Pressione ESC para Sair             |\n");
	    printf("|=======================================================|\n"); 
        printf("- Escolha opção: ");
        ch = getch();
        printf("\n");
        switch (ch)
        {
            case '1': Cadastrar(); break;
            case '2': listar(); break;
            case ESC: exit(0);
            default: printf(" \'%c\' não é uma opção válida.\n (pressione qualquer tecla para continuar)", ch); getch();
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int i, j, n; //declara a altura, a base e o vertice das figuras

void trapezioRet()
{
	printf("Digite o valor de n:", n);
	scanf("%d", &n);
	// system(" color  : #191970");
	for(i = 1; i <= n; i++)
	{
		for(j = n + i; j >= 1 ; j--){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
			printf("*");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
void trianguloRet()
{
	printf("Digite a altura do triangulo retangulo:", n);
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("**");
		for(j = 1; j <= i ; j++)
		{
			printf("**");
	    }
		printf("\n");   	
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
	
void trianguloEqui()
{
// int i, j, n;
	printf("Digite o valor de n:", n);
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		for(j = n - i; j >= 1; j--)
		    printf(" ");
		for(j = 1; j <= i ; j++)
			printf("*");
		for(j = 1; j <= i ; j++)
		    printf("*");
		printf("\n");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int main(){
	trapezioRet();
	printf("\n\n");
	system("pause");
	trianguloRet();
	printf("\n\n");
	system("pause");
	trianguloEqui();
}
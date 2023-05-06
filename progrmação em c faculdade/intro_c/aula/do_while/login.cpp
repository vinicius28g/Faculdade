#include<stdio.h>
#include <locale.h>// biblioteca para usar asentuação
#include <string.h>

int main(){
	char senha[4], usuario[70];
	char conf_senha[4], conf_usuario[70];
	
	setlocale(LC_ALL, "portuguese"); // padroniza a lingua que vai ser utilizado no codigo. 
	
	do{
		printf("crie um usuário: ");
		scanf("%s", &usuario);
		
		if(strlen(usuario) >70){ // verifica se ultrapassou a capacidade da string.
		printf("\no campo usuário so pode ter 4 caracteres\n");
		printf("por favor, ensira um usuário valido\n");
		}
	}while(strlen(usuario) >70);
	 // coloquei o do while para se o numeuro da string ultrapassar o usuario pode ser colocado novamente
	 
	do{
		printf("crie uma senha de 4 gigitos: ");
		scanf("%s", &senha);
		
		if(strlen(senha)> 4){
			printf("\no campo senha so pode ter 4 caracteres");
			printf("\npor favor, esira uma senha valida\n");
		}
	}while(strlen(senha)>4);
	
	printf("\nobrigado por fazer o longin\n");
	printf("agora incira  seu longin para poder entrar\n");
	
	int i =1;
	while(i<= 3){
		printf("\n");
		printf("digite o seu usuário: ");
		scanf("%s", &conf_usuario);
		
		printf("digite a sua senha: ");
		scanf("%s", &conf_senha);
		
		if(strcmp(conf_usuario, usuario) == 0 || strcmp(conf_senha, senha) == 0){
			//compara as string e exigi um valor de retorno ou seja 0.
			break;// sai do loop while
		}else{
			i++;
			printf("senha ou usuário incorreto, tente novamente\n");
		}
		if(i>3){
			printf("o números de tentativas foi excedido\n");
			printf("o programa sera encerrado\n");
			return(0);
		}
			
	}
	
	printf("\nseja bem vindo %s", usuario);
	return (0);
	
	
}

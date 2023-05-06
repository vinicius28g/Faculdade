#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i=456;
  
   FILE *pont_arq;
   int r;
   char arq[50]= "arquivo2.txt";
   pont_arq = fopen(arq, "w");
   
   //Testando a abertura do arquivo
  if (pont_arq == NULL)
  {
    printf("Erro ao tentar abrir o arquivo!");
    exit(1);
  }
  //Gravando strings no arquivo
   r = fputs("Programando em Linguagem C. ", pont_arq);
   r = fputs("Programando em Linguagem Cwer \n. ", pont_arq);
   r = fputs("Programando em Linguagem Cqw %i. ", pont_arq);
   
   //Verificando se os dados foram gravados com sucesso
   if( r == EOF)
   {
       printf("Erro ao tentar gravar os dados! \n");
   }
   else
     {
        printf("Dados gravados com sucesso. \n");
     }
  
   //fechando o arquivo
   fclose(pont_arq);
   return 0;
}
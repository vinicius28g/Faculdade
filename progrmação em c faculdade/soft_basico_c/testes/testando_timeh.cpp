#include <stdio.h> //gets
#include <stdlib.h> // atoi
#include <time.h> // necessario pra colocar data e hora

int main(){
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	
	printf("\nHora ...: %d:",data_hora_atual->tm_hour);//hora 
		 	printf("%d:",data_hora_atual->tm_min);//minuto
		 	printf("%d\n",data_hora_atual->tm_sec);//segundo
		 	printf("\t\t");
		 	printf("\nData ...: %d/", data_hora_atual->tm_mday);
		 	printf("%d/",data_hora_atual->tm_mon+1); //mês
		 	printf("%d",data_hora_atual->tm_year+1900); //ano
}
	
	
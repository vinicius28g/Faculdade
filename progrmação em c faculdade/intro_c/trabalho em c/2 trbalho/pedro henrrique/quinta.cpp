// calcular a velocidade o tempo e a distância.

#include<stdio.h>
#include<stdlib.h>

int main(){
	float v, t, d;
	int b =1, opcao;
	while(b>0){
		
		printf("escolha uma opcao\n");
		printf("(1) calcular a velociade media\n");
		printf("(2) calcuar a distancia\n");
		printf("(3) calcular o tempo \n");
		printf("(4) encerrar o programa\n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1: 
				printf("qual eh a distanica em (m)?\n");
				scanf("%f", &d);
				printf("qual foi o tempo? em (s)\n");
				scanf("%f", &t);
				v =(d/t)*3.6;
				printf("sua velocidade media eh: %.2f km\n", v);
				system("pause");
				system("cls");
			break;
			
			case 2:
				printf("qua foi a sua velocidade no percurso em (km/h)?\n");
				scanf("%f", &v);
				v/= 3.6;
				printf("qual foi o tempo em (s)?\n");
				scanf("%f", &t);
				printf("a distancia foi: %.2f m\n", v*t);
				system("pause");
				system("cls");
			break;
			
			case 3:
				printf("qua foi a sua velocidade no percurso? em (km/h)\n");
				scanf("%f", &v);
				v/= 3.6;
				printf("qual foi a distanica? em (m)\n");
				scanf("%f", &d);
				printf("o seu tempo foi: %.2f s\n", d/v);
				system("pause");
				system("cls");
			break;
			case 4:
				return 0;
			break;	
		}
	}
	
}

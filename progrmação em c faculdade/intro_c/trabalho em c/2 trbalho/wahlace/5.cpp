#include<stdio.h>
#include<stdlib.h>


int main(){
	int i =1, escolha;
	float velo, dist, tmp;
	
	printf("qual funcao voce deseja?\n");
	printf("1) calcular velocidade\n");
	printf("2) calcular distancia\n");
	printf("3) calcular tempo\n");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("qual foi a distancia que voce pecorreu (m)?\n");
			scanf("%f", &dist);
			printf("por quanto tempo voce andou? (s)\n");
			scanf("%f", &tmp);
			printf("sua velocidade foi: %.2f km/h\n", (dist/tmp)*3.6);
		break;
		case 2: 
			printf("qual velocidade voce alcancou? (km/h)\n");
			scanf("%f", &velo);
			printf("por quanto tempo voce andou? (s)\n");
			scanf("%f", &tmp);
			printf("a sua distancia foi: %.2f m\n", (velo/3.6)*tmp);
			break;
		case 3:
			printf("qual foi a distancia que voce pecorreu? (m)\n");
			scanf("%f", &dist);
			printf("qual velocidade voce alcancou? (km/h)\n");
			scanf("%f", &velo);
			printf("o tempo foi: %.2f s\n", dist/(velo/3.6));
		
	}
	
	
}

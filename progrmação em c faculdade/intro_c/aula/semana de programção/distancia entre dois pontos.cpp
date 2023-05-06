// calcular a distancia entre dois pontos 

#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1, x2, y2, distancia;
	
	printf("insira duas cordenadas\n");
	printf("cordenada 1:\n");
	scanf("%f %f", &x1, &y1);
	printf("cordenada 2:\n");
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("a distancia eh: %.2f", distancia);
}

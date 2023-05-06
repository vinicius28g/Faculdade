
#include<stdio.h>
#include <stdlib.h>

float cp1,cp2,cp3;
char pdt1[20], pdt2[20], pdt3[20];
 
int main(){
	printf("coloque o nome de um produto e em seguida coloque o seu preco\n");
	scanf("%s %f", &pdt1, &cp1);
	
	printf("coloque o segundo nome de um produto e em seguida o seu preco\n");
	scanf("%s %f", &pdt2, &cp2);
	
	printf("coloque o terceiro nome e em seguida o seu valor\n");
	scanf("%s %f", &pdt3, &cp3);
	
	printf("---------------------------------------------------------------------------\n\n");

	printf("%s custa %f\n",pdt1,cp1);
	printf("%s custa %f\n",pdt2,cp2);
	printf("%s custa %f\n",pdt3,cp3);
	
	printf("---------------------------------------------------------------------------\n\n");	
	
	if(cp1<cp2 && cp1<cp3)
	printf("%s custa %f e eh mais barato",pdt1,cp1);
	else{
		if(cp2<cp3 && cp2<cp1 ){
			printf("%s custa %f e eh masi barato",pdt2,cp2);
		}else{
			if(cp3<cp1 && cp3<cp2)
			printf("%s custa %f e eh masi barato",pdt3,cp3);
		}
	}
	return 0;
}


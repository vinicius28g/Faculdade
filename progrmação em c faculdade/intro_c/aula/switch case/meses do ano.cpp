// mesesd os ano 
#include<stdio.h>

int main(){
	int op;
	printf("informe um valor de 1 a 12: ");
	scanf("%d", &op);
	switch (op){
		case 1:
			printf("janeiro");
			break;
		case 2:
			printf("fevereiro");
			break;
		case 3:
			printf("março");
			break;
		case 4:
			printf("abril");
			break;
		case 5:
			printf("maio");
			break;
		case 6:
			printf("junhu");
			break;
		case 7:
			printf("julho");
			break;
		case 8:
			printf("agosto");
			break;
		case 9:
			printf("setembro");
			break;
		case 10:
			printf("outubro");
			break;
		case 11:
			printf("novenbro");
			break;
		case 12:
			printf("dezembro");
			break;
		default:
			printf("opcao incorreta");
	}
}

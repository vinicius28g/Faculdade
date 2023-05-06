#include<stdio.h>
#include<stdlib.h>

int main(){
	int i = 1;
	float num;
	
	printf("informe um nuemrp entre 12 e 20: ");
	
	while(i<10){
		scanf("%f", &num);
		if(num>=12 && num<= 20){
			printf("%.1f", num);
			break;
	 	}else 
			printf("numero incorreto informe outro: ");
		i++;
	}
	return (0);
		
	
}


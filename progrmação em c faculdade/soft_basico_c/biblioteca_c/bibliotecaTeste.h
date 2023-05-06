#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float cubo(float num){
	float c;
	c= pow(num,3);
	return c;
}

// returns the highest number among those entered. Requires an amount of the argumet

float maiorNum(int qnt_num){
	float num;
	float higher_num = 0;
	
	for( int i =0; i<qnt_num; i++){
		printf("digite o numero %i ", i+1);
		scanf("%f", &num);
		if(num > higher_num){
			higher_num = num;
		}
	}
	
	return higher_num;
}

int antsuc(int num){
	printf("antecessor : %i\n", num -1);
	printf("sucessor : %i\n", num+1);
	return 0;
}

int contletra(char *str)
{
    int total=0;

    while( str[total] != '\0')
        total++;

    return total;
}

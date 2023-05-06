#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char strings [5][100]= {"vinicius" " " "um" " ""gostoso"};
	int count;
	 
	 strings= "v";
	 strings[1]= "um gostoso";
	
	for(count=0; count<5;count++){
		printf("%s", strings[count]);
	}
}
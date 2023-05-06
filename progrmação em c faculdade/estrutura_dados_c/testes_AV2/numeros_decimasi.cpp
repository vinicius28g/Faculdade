#include<stdlib.h>
#include<stdio.h>

int main(){
/*	int a= 200, b= 5, c= 9;
	printf ("a: %-5o b: %-5D c: %-5D", a, b, c);
	
	// o forma octal
	// x forma exadecimal*/
	
	int x, *y, z;
	x = 5;
	y = &x;
	z = 10;
	scanf("%d", y);
	printf("%d %d" , x, z);
}

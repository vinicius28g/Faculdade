#include <stdio.h>
#include <stdlib.h>

int main(){

int num1,num2;

printf("\nInforme os n�meros: ");
scanf ("%i""%i",&num1,&num2);

if (num1 % 2 == 0){
    printf ("\nO n�mero %i � par e",num1);
}else {
    printf("\nO n�mero %i � impar e",num1);
}
if (num1>num2){
    printf (" � o n�mero � o maior");
}else {
    printf(" � o n�mero � o menor");
}

}

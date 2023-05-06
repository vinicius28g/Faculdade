#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int linha, coluna;
int main()
{
    int n, alt, lar;
    scanf("%d", &n);
    
    for (alt = 1; alt <= n; alt++)
    {
        for (lar = 1; lar <= (2*alt - 1); lar++)
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}
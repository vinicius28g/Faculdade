#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
char str[16];
char dir[16];

int main(){
printf("Informe o nome do diretório\n");
scanf("%s", &dir);
sprintf(str, "mkdir %s", dir);
printf("\n\n");
printf("%s\n", str);
printf("\n\n");
printf("%s\n", str);

system(str);
}
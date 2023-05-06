#include <stdio.h>

#include <stdlib.h>

int main()

{

float nota1,nota2,nota3,media;

int contalunos;

for (contalunos=1;contalunos<=40;contalunos++)

{

printf("Entre com a nota 1 do aluno: ");

scanf("%f",¬a1);

printf("Entre com a nota 2 do aluno: ");

scanf("%f",¬a2);

printf("Entre com a nota 3 do aluno: ");

scanf("%f",¬a3);

media=(nota1+nota2+nota3)/3

if (media>=7)

{

printf("Aluno APROVADO com média : %.2f",media);

}

else

{

printf("Aluno REPROVADO com média : %.2f",media);

}

}

return 0;

}

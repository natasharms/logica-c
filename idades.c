// NÃO TA LENDO O SEGUNDO NOME

#include <stdio.h>
#include <string.h>

int main (){

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    fseek(stdin, 0, SEEK_END);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    gets(nome2); 
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("\nA idade média de %s e %s eh de %.1lf anos", nome1, nome2, media);

    return 0;
}
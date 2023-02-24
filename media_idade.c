#include <stdio.h>

int main (){

    int a, cont=0, soma=0;
    double media;

    scanf("%d", &a);

    while (a>=0){

        soma = soma+a;
        cont = cont+1;

        scanf("%d", &a);

    }

    if (cont==0){

        printf("Impossível calcular\n");

    }else{

    media = (double)soma/cont;

    printf("Media= %.2lf", media);

    }

    return 0;
}
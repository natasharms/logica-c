#include <stdio.h>
#define TAM 10

int main (){

    int N;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&N);

    double v[N],soma=0,media;

    //leitura do vetor
    for(int i=0; i<N; i++) {

        printf("Digite um numero: ");
        scanf("%lf",&v[i]);
        soma=soma+v[i];

    }

    media = soma / N;
    
    //impressão 
    printf("VALORES = ");
        for(int i=0; i<N; i++) {

            printf("%.1lf ",v[i]);
            
        }

    printf("\nSOMA = %.2lf",soma);
    printf("\nMEDIA = %.2lf",media);


    return 0;
}
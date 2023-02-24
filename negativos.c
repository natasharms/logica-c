#include <stdio.h>
#define TAM 10

int main (){

    int N;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&N);

    int v[N];

    // Leitura do vetor
    for(int i=0; i<N; i++) {

        printf("Digite um numero: ");
        scanf("%d",&v[i]);

    }
    
    printf("NEGATIVOS\n");

    //impressão dos negativos
    for(int i=0; i<N; i++) {

        if (v[i]<0){
            printf("%d\n",v[i]);
        }
    }

    return 0;
}
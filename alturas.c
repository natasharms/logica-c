#include <stdio.h>
#define TAM 10

int main (){

    int N;
    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d",&N);

    char nome[N][50];
    int idades[N];
    double alturas[N], somaAltura=0, media;

    //leitura do vetor e soma das alturas
    for(int i=0; i<N; i++) {

        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d",&idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
        
        somaAltura=somaAltura+alturas[i];
    }

    media = somaAltura/N;

    printf("Altura média: %.2lf\n", media);

    //MENOS DE 16

    int cont=0;
    double porc;

    for(int i=0; i<N; i++) {

        if(idades[i]<16){
            cont=cont+1;
        }

    }

    porc = (double)cont*100/N;

    printf("Pessoas com menos de 16 anos: %.1lf %%", porc);

    for(int i=0; i<N; i++) {

        if(idades[i]<16){
            printf("%s\n", nome[i]);
        }

    }


return 0;

}
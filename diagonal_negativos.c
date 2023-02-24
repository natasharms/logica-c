#include <stdio.h>
#define TAM 10

int main (){

    int N;
    printf("Ordem: ");
    scanf("%d",&N);

    int m[N][N], contNeg=0;

    // loop de leitura da matriz
    for (int l = 0 ; l < N ; l++){ 
        for(int c = 0 ; c < N ; c++){

            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d",&m[l][c]); 

            if(m[l][c] <0){
                contNeg++;
            }
        }
    } 

    printf("DIAGONAL PRINCIPAL\n");

    for (int l = 0 ; l < N ; l++){ 
        for(int c = 0 ; c < N ; c++){

            if(l==c){

                printf("%d ", m[l][c]);

            }

        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", contNeg);


    return 0;

}
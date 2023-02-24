#include <stdio.h>

int main (){

    int x, y, somaImpares=0, menor, maior;

    scanf("%d",&x);
    scanf("%d",&y);

    if (x<y){
        menor=x;
        maior=y;
    } else {
        menor=y;
        maior=x;
    }

    for(int i=menor+1; i < maior; i++){

        if (i%2!=0){

            somaImpares = somaImpares + i;

        }

    }

    printf("Soma dos Impares: %d\n", somaImpares);

    return 0;
}
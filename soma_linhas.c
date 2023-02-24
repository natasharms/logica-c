#include <stdio.h>
#define TAM 10

int main (){

    int m, n;
    printf("Quantidade de linhas e colunas: ");
    scanf("%d %d", &m, &n);

    double matriz[m][n], vetor[m];

    // loop de leitura da matriz
    for (int l = 0 ; l < m; l++){ 

        printf("Digite os elementos da %da. linha: \n",l+1);

        for(int c = 0 ; c < n; c++){
            scanf("%lf",&matriz[l][c]); 
        }
    } 

    for(int i = 0 ; i < m; i++){

        vetor[i]=0;

        for(int c = 0 ; c < n; c++){
            vetor[i]=vetor[i]+matriz[i][c];
        }
    
    }

    printf("VETOR GERADO\n");

    for(int i = 0 ; i < m; i++){

        printf("%.1lf\n",vetor[i]);
    
    }


    return 0;

}
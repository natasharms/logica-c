#include <stdio.h>

int main (){

    int num, p;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++){

        p = num*i;
        printf("%d X %d = %d\n", num, i, p);
    }

    return 0;
}
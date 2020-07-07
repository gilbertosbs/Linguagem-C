#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, r, i;
    printf("Insira um valor para N:");
    scanf("%d", &n);
    i = 1;

    while(i <= 10){
        r = n * i;
        printf("%d",n);
        printf("X");
        printf("%d", i);
        printf("=");
        printf("%d", r);
        printf("\n");
        i = i + 1;
    }
}

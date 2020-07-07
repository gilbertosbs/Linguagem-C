#include <stdio.h>
#include <stdlib.h>
#define B 2


void main(){
    int i;
    float r;

    printf("Insira um numero:");
    scanf("%d", &i);


    r = i - B * (i / B);
    if(r!=0){
        printf("O numero %d", i);
        printf("eh.. impar");
    }else{
        printf("O numero %d", i);
        printf("eh.. par");
    }
}

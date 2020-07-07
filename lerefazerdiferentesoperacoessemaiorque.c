#include <stdio.h>
#include <stdlib.h>

void main(){
     int a, b, r;
     scanf("%d", &a);
     scanf("%d", &b);

     if (a>b){
        r = a - b;
        printf("O valor da R eh: %d", r);
     }else{
        r = b - a;
        printf("O valor da R eh: %d", r);
     }
}

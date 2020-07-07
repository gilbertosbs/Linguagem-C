#include <stdio.h>
#include <stdlib.h>

void main(){
     int x, y, z;
     printf("Informe um valor para X:");
     scanf("%d", &x);
     printf("Informe um valor para Y:");
     scanf("%d", &y);

     if(x > y){
        z = x - y;
        printf("O valor eh :%d", z);
     }else{
     z = y - x;
     printf("O valor eh :%d", z);
     }
}

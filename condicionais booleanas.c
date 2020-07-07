#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
     // definindo varivaies
     bool a = true, b = false;

     if(a){
        printf("A eh verdadeiro");
     }

     //se b for falso
     if(b){
        printf(" B eh verdadeiro");
     }else{
         printf("\nB eh falso");

     }

     //comparando uma falsidade
     if(!b){
       printf("\n B eh falso");
     }
 }

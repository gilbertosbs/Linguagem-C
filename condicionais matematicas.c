#include <stdio.h>
#include <stdlib.h>

void main(){
     // definindo varivaies
     int a = 5, b = 20, c = 15;
     char d ='x';

     //maior
     if(a > 2){
        printf("\n %d eh maior que 2", a);

     }
     //maior ou igual
     if(c >= b){
        printf("\n %d eh maior ou igual que %d", c, b);
     }
     // menor
     if(a < 10){
        printf("\n %d eh menor que 10", a);
     }
     //menor ou igual
     if(a <= 10){
        printf("\n %d eh menor ou igual a 10", a);

     }

     //diferente de
     if(c != 10){
        printf("\n %d nao eh 10", c);

     }
     if(d != 'a'){
        printf("\n x nao eh a", d);
     }
}

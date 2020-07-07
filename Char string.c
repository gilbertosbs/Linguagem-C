#include <stdio.h>
#include <stdlib.h>

void main(){

     //Definindo variaveis
     int a;
     float b;
     char c;
     //passando valores
     a = 5;
     b = 2.3;
     c = 'a';
     //escrevendo na tela
     printf("\n O valor de a = %d", a);
     printf("\n O valor de b = %.2f", b);
     printf("\n O valor de c = %c\n", c);

     //lendo valores
     scanf("%d", &a);
     scanf("%f", &b);
     scanf(" %c", &c);

       //escrevendo na tela
     printf("\n O valor de a = %d", a);
     printf("\n O valor de b = %.2f", b);
     printf("\n O valor de c = %c\n", c);

     //pausando
     system("pause");

}

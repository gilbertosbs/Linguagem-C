#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

     //responsavel por alimentar o rand de forma diferente
     srand((unsigned)time(NULL));

     //variavel para receber o resto da divisao do numero por 3
     int aleatorio = rand() ;
     //variavel que recebe o resto da divisão por 5(1-5)
     int aleatorioSegundo = (rand() %5)+ 1;
     //imprime
     printf("%d", aleatorio);
     printf("\n%d", aleatorioSegundo);

}

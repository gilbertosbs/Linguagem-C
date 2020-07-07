#include <stdio.h>
#include <stdlib.h>
#define TAM 3
//função principal
void main(){

   //imprime na tela o resultado
   int vetor[3],cont;

   //passando valores para os vetores
   vetor[0] = 5;
   vetor[1] = 10;
   vetor[2] = 15;

   //exibindo vetores
   printf("\n Posicao 0: %d", vetor[0]);
   printf("\n Posicao 1: %d", vetor[1]);
   printf("\n Posicao 2: %d", vetor[2]);

   //imprimindo vetor no laço de repetição
   for(cont = 0; cont < TAM; cont ++){
       printf("\n Posicao %d : %d", cont, vetor[cont]);
   }

   //lendo 3 valores pem um laço de repetição
   for(cont = 0; cont< TAM; cont++){
    scanf("%d", &vetor[cont]);
   }
   for(cont = 0; cont < TAM; cont++){
    printf("\n Posicao %d : %d", cont, vetor[cont]);
   }


}

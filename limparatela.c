#include <stdio.h>
#include <stdlib.h>
void limpaTela(){
     system("CLS");
}
int main(){

    int a;

    printf("Digite um valor para a:");

    scanf("%d", &a);

    limpaTela();

    printf("O valor digitado foi %d \n fim do programa\n", a);

   //retorno da fun��o
   return 0;
}

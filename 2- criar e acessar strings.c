#include <stdio.h>
#include <stdlib.h>

//fun��o principal
void main(){

    //variaveis
    char palavra[255];

    //instru��o
    printf("\nDigite uma palavra:");

    //limpa o buffer
    setbuf(stdin, 0);

    //le a string
    fgets(palavra, 255, stdin);

    //limpa as casas nao utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //imprimindo
    printf("\n%s", palavra);
}

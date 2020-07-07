#include <stdio.h>
#include <stdlib.h>
//switch case substitui varios ifs(condicoes)
void main(){
    //definindo as variaveis
    int a = 1;
    char b = 'x';

    switch(a){
    case 1:
        printf("\n Opcao escolhida: 1");
        break;
    case 2:
        printf("\n Opcao escolhida: 2");
        break;
    case 3:
        printf("\n Opcao escolhida: 3");
        break;
    default:
        printf("\n Opcao invalida");

    }

    //switch com char
    switch(b){
    case 'x':
        printf("\n Opcao escolhida: x");
        break;
    default:
        printf("\n Opcao invalida");
        }
}

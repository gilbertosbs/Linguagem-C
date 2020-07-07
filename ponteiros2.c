#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //variavel
    int a = 20, b = 10;

    int *ponteiro;

    ponteiro = &b;

    printf("Valor de b: %d\n", b);

    //* CONTEUDO APONTADO POR
    *ponteiro = 40;

    printf("Valor de b: %d",b);

    printf("\nValor de a: %d",a);

    scanf("%d", &a);

    printf("Valor de a: %d", a);


    return 0;
}

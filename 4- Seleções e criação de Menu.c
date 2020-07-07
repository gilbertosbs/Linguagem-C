//trabalha com menu com varias opções de operações matemáticas
#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int opcao,number1, number2, soma, sub, mult, div;
    while(opcao <1 || opcao > 3){
    printf("\nEscolha uma opcao:");
    printf("\n1- Soma:");
    printf("\n2- Subtracao:");
    printf("\n3- Multiplicacao:");
    printf("\n4- Divisao:");

    //lendo a opcao
    scanf("%d", &opcao);
    printf("\n Digite dois numeros para a operacao matematica:");
    scanf("%d", &number1);
    scanf("%d", &number2);

    switch(opcao){
    case 1:
        soma = number1 + number2;
        printf("\n A soma dos numeros eh: %d", soma);
        break;
    case 2:
        sub = number1 - number2;
        printf("\n A subtraçao dos dois numeros eh:%d", sub);
        break;
    case 3:
        mult = number1 * number2;
        printf("\nA multiplicacao dos numeros eh: %d", mult);
        break;
    case 4:
        div = number1 / number2;
        printf("\n A divisao dos dois numeros eh: %d", div);
    default:
        printf("\nOpcao Invalida");
        break;
    }
    }
}



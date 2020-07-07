#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

void main(){
     setlocale(LC_ALL, "Portuguese");
    //definindo variaveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //condicional
    if(a == 5 ){
       printf("A variavel a = 5");
    }
    if(b == 2.5){
        printf("A variavel b = 2.5 ");
    }
    if(c == 'x'){
        printf("\n A variavel c = letra x");
    }

    //numero impar ou par
    if(a % 2 == 1){
        printf("\n A variavel a é impar");
    }else{
        printf("\n A variavel é par");
    }

    //condicional composta
    if(opcao == 1){
        printf("\n A opcao = 1");
    }else{
        printf("A opcao = 2");
    }
}

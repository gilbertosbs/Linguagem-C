//programa conta de 1 até 10 trabalhando com constantes
#include <stdio.h>
#include <stdlib.h>
#define TAM 10 //cria a constante tam de valor 10
//funcao principal do programa
void main(){
    printf("%d", TAM);

    int i;

    for(i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }
}



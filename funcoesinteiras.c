#include <stdio.h>
#include <stdlib.h>

int retornaDEZ(){

    return 10;
}
float retornaQuebrado(){
    return 5.5;
}
int main(){
    int a;

    a = retornaDEZ();

    float b;

    b = retornaQuebrado();

    printf("%f", b);

    //imprimindo valor de a
    printf("\n%d", a);

    return 0;
}

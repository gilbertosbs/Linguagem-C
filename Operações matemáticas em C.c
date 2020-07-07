#include <stdio.h>
#include <stdlib.h>

void main(){
     // definindo varivaies
     int a = 6, b = 4;

     //soma
     printf("\n A soma de %d e %d = %d",a , b, a + b);

     //subtração
     printf("\n A subtracao de %d e %d = %d",a , b , a - b);

     //Divisão
     printf("\n A divisao de %d e %d = %d",a , b , a % b); //pode se colocar / para float


     //multiplicação
     printf("\n A multiplicacao de %d e %d = %d",a , b , a * b);

     //resto da divisão
     printf("\n O resto da divisao entre de %d e %d = %d",a , b , a / b);

     //valor absoluto passa para positivo
     printf("\n O valor absoluto de -3 = %d", abs(-3));

     //pausa do programa
     system("pause");
}

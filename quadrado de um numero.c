/*Dada uma seq��ncia de n�meros inteiros n�o-nulos, seguida por 0, imprimir seus quadrados*/


int main() {
  int numero,     /* usada para leitura da sequencia  */
      quadrado;   /* guarda o quadrado do numero lido */

printf("\nCalculo dos quadrados de uma sequencia de numeros\n");
printf("\nEntre com uma sequencia de numeros inteiros nao-nulos, seguida por 0:\n");
scanf("%d", &numero);

  while (numero != 0) {
    quadrado = numero * numero;
    printf("O quadrado do numero %d e' %d\n", numero, quadrado);
    scanf("%d", &numero);
  }
  return 0;
}


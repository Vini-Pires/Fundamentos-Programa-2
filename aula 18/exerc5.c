/*
  5) Um problema típico em ciência da computação consiste em
  converter um número da sua forma decimal para binária. Crie um
  algoritmo recursivo para resolver esse problema.
  - Solução trivial: x=0 quando o número inteiro já foi convertido para
  binário
  - Passo da recursão: saber como x/2 é convertido. Depois, imprimir um
  dígito (0 ou 1) dado o sucesso da divisão.
*/

// Para obtermos o binário de um numero decimal, precisamos
// dividir o decimal por 2 indefinidamente, após isso começamos a exibir
// os restos dessas divisões até que a função termine sua execução

#include <stdio.h>
#include <stdlib.h>

void TransformaBinario (int bits, int inteiro) {
  int resto = 0;
  if (inteiro <= 31 && bits > 0){
    if (inteiro == 0) {
      TransformaBinario(bits - 1, inteiro);
      printf("%d", inteiro);
    } else if (inteiro == 1) {
      TransformaBinario(bits - 1, 0);
      printf("%d", inteiro);
    } else {
      resto = inteiro % 2;
      TransformaBinario(bits - 1, inteiro / 2);
      printf("%d", resto);
    }
  } else if (bits > 0){
    TransformaBinario(bits, 31);
    printf(" ");
    TransformaBinario(bits, inteiro - 31);
  }
}

int main() {
  int recebido;
  const int byte = 8;

  printf("Insira um valor para tornar-se binário: ");
  scanf("%d", &recebido);

  TransformaBinario(byte, recebido);
  printf("\n");

  return 0;
}

/*
  3) Crie uma função que retorne x elevado a y através de operação de
  multiplicação. A função recebe x e y por parâmetro
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Realiza a potencia de um numero multiplicando-o até que seu expoente
 * chegue a zero
 * 
 * @param base inteiro
 * @param expoente inteiro positivo;
 * @return int 
 */
int PotenciaPorMultiplicacao (int base, unsigned int expoente) {
  int potencia = 1;
  if (expoente == 0) {
    return potencia;
  } else {
    potencia = base * PotenciaPorMultiplicacao(base, expoente - 1);
  }

  return potencia;
}

int main() {
  int x = 9;
  int y = 0;
  int resultado = PotenciaPorMultiplicacao(x, y);

  printf("%d\n", resultado);

  return 0;
}

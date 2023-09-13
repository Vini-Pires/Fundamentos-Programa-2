/*
  2) Crie uma função que retorne x*y através de operação de soma. A função
  recebe x e y por parâmetro
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Recebe dois numeros a serem multiplicados e realiza soma para 
 * concretiza a multiplicação (2+2+2 = 2·3)
 * 
 * @param val1 inteiro 
 * @param val2 inteiro
 * @return int multiplicação dos parâmetros 
 */
int MultiplicaPorSoma (int val1, int val2) {
  int mult = 0;
  if (val1 == 0) {
    return mult;
  } else {
    mult = val2 + MultiplicaPorSoma(val1 - 1, val2);
  }

  return mult;
}

int main () {
  int valor = MultiplicaPorSoma(5, 4);
  printf("%d\n", valor);

  return 0;
}

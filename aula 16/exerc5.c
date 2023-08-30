/*
  5) Crie uma função que que receba o valor de um inteiro
  positivo N, calcule e retorne o fatorial desse número.
*/

#include <stdio.h>
#include <stdlib.h>


/**
 * @brief Calcula o fatorial de um numero multiplicando seus antecessores até
 * que chegue no numero inteiro inicial
 * 
 * @param fator um numero do conjunto dos naturais
 * @return int - retorna a multiplicação de seus antecessores
 */
int Fatorial (int fator) {
  int calculo = 1 ;
  for (int i = 1; i <= fator; i++) {
    calculo *= i;
  }
  
  return calculo;
}

int main () {
  printf("%d\n", Fatorial(5));

  return 0;
}

/*
  1) Crie uma função que retorne o fatorial de um número passado por
  parâmetro. A ideia do fatorial está abaixo:
    fatorial = {1 se x = 0 | n • fatorial(n - 1) se n > 0}
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Calcula o fatorial do numero com seu antecessor até que chegue a 1;
 * 
 * @param fator inteiro de 0 a 12
 * @return int multiplicação com seus antecessores até 1
 */
int Fatorial (int fator) {
  int mult = 1;
  if (fator <= 0){
    return mult;
  } else {
    mult = fator * Fatorial(fator - 1);
  }

 return mult;
}

int main () {
  int fator = 12;
  int valor = Fatorial(fator);

  printf("%d\n", valor);

  return 0;
}

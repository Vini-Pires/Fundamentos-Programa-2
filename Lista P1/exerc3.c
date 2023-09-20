/*

  3) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:

  *
  **
  ***
  ****
  ***
  **
  *

*/

#include <stdio.h>
#include <stdlib.h>

void TriaguloLateral(int asteriscos) {

  for (int i = 1; i <= asteriscos; i++) {
    for (int l = 1; l <= i; l++) {
      printf("*");
    }
    printf("\n");
  }

  for (int i = asteriscos - 1; i > 0; i--) {
    for (int c = 1; c <= i; c++) {
      printf("*");
    }
    printf("\n");
  }
  
}

int main() {
  TriaguloLateral(4);

  return 0;
}

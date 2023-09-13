/*
  6) Considere a função x abaixo. O que essa função faz? Escreva
  uma função não-recursiva que resolve o mesmo problema
  
  int funcaox (int a) {
  
    if(a <= 0) return 0;
    else return a + funcaox(a-1);
  
  } //funcaox
*/

// Esse função realiza a soma dos números consecutivamente 
// até que chegue a zero

#include <stdio.h>
#include <stdlib.h>

int SomaConsecutivos (int valor) {
  int valoresSomados = 0;
  
  for (int i = 0; i <= valor; i) {
    valoresSomados += valor;
    valor--;
  }

  return valoresSomados;
}

int main() {
  int resultado = SomaConsecutivos(7);

  printf("%d\n", resultado);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief pega o endereço de memoria e faz o incremento de mais 1 
 * onde esta sendo armazenado o valor
 * 
 * @param valor um ponteiro que aponta um endereço de memória
 */
void incrementa(int* valorPonteiro) {
  printf("Valor recebido %d\n", *valorPonteiro);
  (*valorPonteiro)++;
  printf("Valor incrementado %d\n", *valorPonteiro);
  
  return;
}  // incrementa

int main() {
  int valor = 15;
  incrementa(&valor);
  printf("Valor após a função: %d\n", valor);
  
  return 0;
}  // main

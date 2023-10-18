/*
  1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
  seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
  imprima.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanhoVet;

  printf("Qual o tamanho do vetor? ");
  scanf("%d", &tamanhoVet);
  int* vetor = malloc(tamanhoVet * sizeof(int));
  if (vetor == NULL) {
    perror("Erro de alocação de memória:");
    exit(1);
  }

  for (int i = 0; i < tamanhoVet; i++) {
    printf("%d: %d\n", i+1, vetor[i]);
  }

  return 0;
}

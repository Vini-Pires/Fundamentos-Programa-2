#include <stdio.h>
#include <stdlib.h>

void incrementaVetor(int tam, int vet[]) {
  for (int i = 0; i < tam; i++) {
    vet[i]++;
  }  // for
  return;
}
// incrementaVetor

int main() {
  int vetor[5] = {10, 20, 30, 40, 50};
  incrementaVetor(5, vetor);
  printf("Vetor após a função\n");
  for (size_t i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);
  }  // for
  printf("\n");

  return 0;
}  // main

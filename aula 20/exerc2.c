/*
  2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
  o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
  igual a zero, um ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

// função
// parâmetros - valor inteiro
// retorno - um ponteiro

int* alocadorDinamico (int valorInteiro) {

  // if (valorInteiro <= 0) {
  //   int* ptr_Vetor = calloc(0, 2);
  //   return ptr_Vetor;

  // } else {
    
  // }

  int* ptr_Vetor = malloc(valorInteiro * sizeof(int));
    if (ptr_Vetor == NULL) {
      perror ("Erro de alocação de memoria:");
      exit(1);
    }

    return ptr_Vetor;
}


int main() {
  int* ptr_teste = alocadorDinamico(1);

  printf("%p\n", ptr_teste);

  return 0;
}

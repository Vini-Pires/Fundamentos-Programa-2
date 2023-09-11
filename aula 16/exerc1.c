/*
  1) Faça um algoritmo que implemente uma função que receba 3 números inteiros e 
  retorne o maior valor. Se algum número for negativo retorne -1.
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Recebe um vetor com valores reais e compara 
 * entre eles para retornar o maior deles caso não haja números negativos,
 * nesse caso retorna -1
 * 
 * @param vetor Vetor com os valores reais
 * @param tamanho Tamanho do vetor
 * @return Retorna o maior numero ou -1
 */

float MaiorNum (float vetor[], int tamanho) {
  float maiorNum = 0;
  for (int i = 0; i < tamanho; i++){
    if (vetor[i] >= 0) {
      if (vetor[i] > maiorNum) {
        maiorNum = vetor[i];
        i = 0;
      }
    } else {
      maiorNum = -1;
      break;
    }
  }
  return maiorNum;
}

int main() {
  int MAX_TAMANHO = 3;
  float vNum[MAX_TAMANHO];
  float maiorNumeroDoVetor;

  for (int i = 0; i < MAX_TAMANHO; i++){
    printf("Insira o valor %d: ", i+1);
    scanf("%f", &vNum[i]);
  }
  
  maiorNumeroDoVetor = MaiorNum(vNum, MAX_TAMANHO);

  printf("O maior numero é: %f\n", maiorNumeroDoVetor);

  return 0;
}

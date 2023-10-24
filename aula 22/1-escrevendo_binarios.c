#include <stdio.h>
#include <stdlib.h>


int main() {
  
  char str[20]="Ola arquivo";
  float numero = 5.23;
  int vetor[5] = {10, 20, 30, 40, 50};

  FILE *arq = fopen("arquivo.bin","wb"); // Abre o arquivo para escrita binária

  fwrite(str,sizeof(char),20,arq); // Escreve 20 caracteres
  fwrite(&numero,sizeof(float),1,arq); // Escreve um número real
  fwrite(vetor,sizeof(int),5,arq); // Escreve um vetor de tamanho 5

  fclose(arq); // Fecha o arquivo

  return 0;
}


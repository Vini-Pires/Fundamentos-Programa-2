#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[20];
  float numero ;
  int vetor[5];

  FILE *arq = fopen("arquivo.bin","rb"); //Abre o arquivo para leitura binária

  fread(str,sizeof(char),20,arq);// Lê 20 caracteres
  fread(&numero,sizeof(float),1,arq);// Lê um número real
  fread(vetor,sizeof(float),5,arq);// Lê o vetor de tamanho 5
  
  // Exibe os dados lidos
  printf("Texto: %s\n",str);
  printf("Float: %.2f\n",numero);
  for (int i = 0; i < 5; i++) {
    printf("%i ",vetor[i]);
  }//for
  printf("\n");

  fclose(arq); // Fecha o arquivo

  return 0;
}

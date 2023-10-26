#include "../2-headers/libs-padrao.h"
#include "../2-headers/functions.h"


int main() {
  FILE *arq;


  // Escrita ----------------------------
  char str[20]="Ola arquivo";
  float numero = 5.23;
  int vetor[5] = {10, 20, 30, 40, 50};

  arq = fopen("./output/arquivo.dat","wb"); // Abre o arquivo para escrita binária
  verificaArquivoAberto(arq);

  fwrite(str,sizeof(char),20,arq); // Escreve 20 caracteres
  fwrite(&numero,sizeof(float),1,arq); // Escreve um número real
  fwrite(vetor,sizeof(int),5,arq); // Escreve um vetor de tamanho 5

  fclose(arq); // Fecha o arquivo


  // Leitura ----------------------------
  char str_leitura[20];
  float numero_leitura;
  int vetor_leitura[5];

  arq = fopen("./output/arquivo.dat","rb"); //Abre o arquivo para leitura binária

  fread(str_leitura,sizeof(char),20,arq);// Lê 20 caracteres
  fread(&numero_leitura,sizeof(float),1,arq);// Lê um número real
  fread(vetor_leitura,sizeof(float),5,arq);// Lê o vetor de tamanho 5
  
  // Exibe os dados lidos
  printf("Texto: %s\n",str_leitura);
  printf("Float: %.2f\n",numero_leitura);
  for (int i = 0; i < 5; i++) {
    printf("%i ",vetor_leitura[i]);
  }//for
  printf("\n");

  fclose(arq); // Fecha o arquivo

  return 0;
}


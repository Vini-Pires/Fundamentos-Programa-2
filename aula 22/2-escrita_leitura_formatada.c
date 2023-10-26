#include "../2-headers/libs-padrao.h"
#include "../2-headers/functions.h"

// #include <stdio.h>
// #include <stdlib.h>

// void verificaArquivoAberto(FILE *arq) {
//   if (arq == NULL) {
//     perror("Erro ao abrir arquivo:");
//     exit(1);
//   }

// }

int main () { 
  FILE *arq;

  // Escrita -------------------
  char texto[20] = "Apucarana";
  float real = 5.26;
  int inteiro = 42;
  
  arq = fopen("./output/arquivo.txt","w"); //Abre o arquivo
  verificaArquivoAberto(arq);

  //Realiza a escrita utilizando o fprintf
  fprintf(arq,"Texto: %s\n", texto);
  fprintf(arq,"Real: %f", real);
  fprintf(arq,"Inteiro: %i", inteiro);
  
  fclose(arq);
  
  // Leitura -------------------

  char texto_leitura[20], label[20];
  float real_leitura;
  int inteiro_leitura;
  
  arq = fopen("./output/arquivo.txt","r"); //Abre o arquivo
  verificaArquivoAberto(arq);

  //Realiza a leitura utilizando o fscanf
  fscanf(arq,"%s %s\n", label, texto_leitura);
  fscanf(arq,"%s %f", label, &real_leitura);
  fscanf(arq,"%s %i", label, &inteiro_leitura);
  
  //Exibe os dados lidos
  printf("Texto: %s\n", texto_leitura);
  printf("Real: %f\n", real_leitura);
  printf("Inteiro: %i\n", inteiro_leitura);
  
  fclose(arq);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main () { 
  char texto[20], label[20];
  float real;
  int inteiro;
  
  FILE *arq = fopen("arquivo.txt","r"); //Abre o arquivo
  
  //Realiza a leitura utilizando o fscanf
  fscanf(arq,"%s %s\n", label, texto);
  fscanf(arq,"%s %f", label, &real);
  fscanf(arq,"%s %i", label, &inteiro);
  
  //Exibe os dados lidos
  printf("Texto: %s\n", texto);
  printf("Real: %f\n", real);
  printf("Inteiro: %i\n", inteiro);
  
  fclose(arq);  

  return 0;
}

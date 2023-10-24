#include <stdio.h>
#include <stdlib.h>

int main () { 
  char texto[20] = "Apucarana";
  float real = 5.26;
  int inteiro = 42;
  
  FILE *arq = fopen("arquivo.txt","w"); //Abre o arquivo
  
  //Realiza a escrita utilizando o fprintf
  fprintf(arq,"Texto: %s\n", texto);
  fprintf(arq,"Real: %f", real);
  fprintf(arq,"Inteiro: %i", inteiro);
  
  fclose(arq);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *arquivo;
  // Escrita -----------
  char texto[100] = "Texto de teste parafraseado\n";
  arquivo = fopen("arquivo2.txt", "w");

  // Coloca carácter por carácter no arquivo
  for (int i = 0; i < (int)strlen(texto); i++) {
    fputc(texto[i], arquivo);
  }

  fclose(arquivo);

  // Leitura -----------
  arquivo = fopen("arquivo.txt", "r");
  char caracter;

  while ((caracter = fgetc(arquivo)) != EOF) {
    printf("%c", caracter);
  }
  
  fclose(arquivo);

  return 0;
}

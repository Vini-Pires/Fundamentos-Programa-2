#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *arquivo;
  // Escrita --------
  arquivo = fopen("arquivo3.txt", "w");
  char texto[100] = "Pokeparadas adicionadas\n";

  fputs(texto, arquivo);

  fclose(arquivo);

  // Leitura --------
  arquivo = fopen("arquivo3.txt", "r");
  char textoLido[100];

  fgets(textoLido, 100, arquivo);
  printf("%s", textoLido);

  fclose(arquivo);

  return 0;
}

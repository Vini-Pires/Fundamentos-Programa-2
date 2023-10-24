#include "../libs-padrao.h"

void coletaStringDoTeclado(char text[], int tamanho) {
  setbuf(stdin, NULL);
  fgets(text, tamanho - 1, stdin);
  text[strcspn(text, "\n")] = '\0';
}

#include "1-cripto.h"
#include "../../2-headers/libs-padrao.h"

int main () {
  char mensagem[35] = "Uma mensagem para criptografia";

  printf("Mensagem original: %s\n", mensagem);
  criptografia(mensagem);
  printf("Mensagem criptografada: %s\n", mensagem);

  return 0;
}

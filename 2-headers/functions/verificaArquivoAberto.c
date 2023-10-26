#include "../libs-padrao.h"
#include "../functions.h"

void verificaArquivoAberto(FILE *arq) {
  if (arq == NULL) {
    perror("Erro ao abrir arquivo:");
    exit(1);
  }

}

#include <stdio.h>
#include <stdlib.h>

void verificaArquivoAberto();

int main() {
  // Abrir um arquivo necessita do caminho, seja relativo ou absoluto, e também do modo
  // usado para manipula-lo
  FILE *arquivo = fopen("arquivo1.txt", "w");

  // Verificando se o arquivo abriu corretamente
  verificaArquivoAberto(arquivo); // Exemplo de função para verificar
  if (arquivo == NULL) {
    perror("Erro ao abrir arquivo:");
    exit(1);
  }

  // Sempre que abrir um arquivo ele deve ser fechado antes de usar o mesmo nome
  // pode causar corrupção de dados se não for fechado apropriadamente
  fclose(arquivo);

  return 0;
}

/**
 * @brief Verifica se o arquivo abriu corretamente
 * 
 * @param arq 
 */
void verificaArquivoAberto(FILE *arq) {
  if (arq == NULL) {
    perror("Erro ao abrir arquivo:");
    exit(1);
  }

}

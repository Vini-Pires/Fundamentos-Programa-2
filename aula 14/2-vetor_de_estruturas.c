#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro {
  char nome[30];
  char endereco[100];
  int idade;
};


int main() {

  struct Cadastro cadastro[3] = {
    {
      "Nome 1",
      "Rua aleatoria",
      33
    },
    {
      "Nome 2",
      "Avenida Conhecida",
      44
    },
    {
      "Nome 3",
      "Rodovia movimentada",
      34
    }
  };

  for (size_t i = 0; i < 3; i++){
    printf("| %-30s | %-50s | %3d |\n", 
      cadastro[i].nome,
      cadastro[i].endereco,
      cadastro[i].idade
    );
  }

  return 0;

}

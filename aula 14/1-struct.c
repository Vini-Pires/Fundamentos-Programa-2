#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
  char nome[30];
  float altura;
  float peso;
  int idade;
};


int main() {
  struct Aluno aluno_1;

  strcpy(aluno_1.nome, "Vitor Almeida");
  aluno_1.altura = 1.59;
  aluno_1.peso = 72.50;
  aluno_1.idade = 16;

  printf("%s\n", aluno_1.nome);

  return 0;
}

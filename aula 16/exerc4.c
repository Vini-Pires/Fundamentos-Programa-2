/*
  4) Faça uma função que receba a média final de um aluno
  por parâmetro e retorne o seu conceito, conforme a tabela abaixo:
    | [9 -10] => A |
    | [7 - 9[ => B |
    | [5 - 7[ => C |
    | [0 - 5[ => D |
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float mediaFinal;
  char conceito;
} Aluno;

char Conceitualizacao (float nota) {
  char conceito;
  if (nota <= 10.0 && nota >= 9.0) {
    conceito = 'A';
  } else if (nota >= 7.0 && nota < 9.0) {
    conceito = 'B';
  } else if (nota >= 5.0 && nota < 7.0) {
    conceito = 'C';
  } else if (nota >= 0.0 && nota < 5.0) {
    conceito = 'D';
  } else {
    conceito = 'F';
  }

  return conceito;
}

int main() {
  Aluno aluno;
  char tabelaNota[] = "Notas";
  char tabelaConceito[] = "Conceito";

  printf("Informe a media final: ");
  scanf("%f", &aluno.mediaFinal);

  aluno.conceito = Conceitualizacao(aluno.mediaFinal);

  printf("| %-7s | %-10s |\n", tabelaNota, tabelaConceito);
  printf("| %-7.2f | %-10c |\n", aluno.mediaFinal, aluno.conceito);

  return 0;
}

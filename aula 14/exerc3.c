/*
  3) Construa uma estrutura aluno com nome, curso e 4 notas,
  média e situação. Leia as informações nome, curso e notas do
  teclado, calcule a média e armazene a situação do aluno.
  - media ≥ 7 → Aprovado;
  - 3 ≤ media < 7 → Exame;
  - media < 3 → Reprovado;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[41];
  char curso[101];
  float notas[4];
  float media;
  char situacao[20];
} Aluno_Padrao;

int main() {
  Aluno_Padrao alunos[1];

  for (int i = 0; i < 1; i++) {
    float media = 0;

    setbuf(stdin, NULL);
    printf("Insira o nome: ");
    fgets(alunos[i].nome, 40, stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

    setbuf(stdin, NULL);
    printf("Insira o curso: ");
    fgets(alunos[i].curso, 100, stdin);
    alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0';

    for (int l = 0; l < 4; l++){
      printf("Insira a nota %d: ", l+1);
      scanf("%f", &alunos[i].notas[l]);
      media += alunos[i].notas[l];      
    }

    media /= 4;
    alunos[i].media = media;

    if (media >= 7.0) {
      strcpy(alunos[i].situacao, "Aprovado");
    } else if (media < 3.0) {
      strcpy(alunos[i].situacao, "Reprovado");
    } else {
      strcpy(alunos[i].situacao, "Exame");
    }
    
  }

  for (int i = 0; i < 1; i++){
    printf("| %-10s | %-20s ",
      alunos[i].nome,
      alunos[i].curso
    );
    for (int l = 0; l < 4; l++){
      printf("| %.2f ", alunos[i].notas[l]);
    }
    printf("| %.2f | %-10s |\n",
      alunos[i].media,
      alunos[i].situacao
    );
    
  }
  

  return 0;
}

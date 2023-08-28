/*
  3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
  aluno e uma letra. Se a letra for A, o procedimento calcula a média
  aritmética das notas do aluno, se for P, a sua média ponderada 
  (pesos: 5, 3 e 2) e se for S, a soma das notas. O valor calculado também deve ser retornado e exibido na função main.
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Recebe um carácter que indica o procedimento de calculo mediano ou soma e
 * um vetor com as notas a serem calculadas, não retorna nenhum valor
 * 
 * @param tipoMedia Esperado receber os específicos caracteres ('A', 'P', 'S')
 * @param notas Esperado receber um vetor com os valores para a media de tamanho máximo 3
 */
void MediaAluno (char tipoMedia, float notas[]) {
  float media = 0;
  int quantidadeNotas = 3;
  
  for (int i = 0; i < quantidadeNotas; i++) {
    
    if(tipoMedia == 'A' || tipoMedia == 'a') {
      media += notas[i];
    
      if(i + 1 == quantidadeNotas) {
        media /= quantidadeNotas;
        printf("A media aritmética desse aluno é: %.2f\n", media);
      }

    } else if (tipoMedia == 'P' || tipoMedia == 'p') {
      if(i == 0) {
        media += notas[i] * 5;
      } else if (i == 1) {
        media += notas[i] * 3;
      } else if(i == 2) {
        media += notas[i] * 2;
        media /= 8;
        printf("A media ponderada desse aluno é: %.2f\n", media);
      }

    } else if (tipoMedia == 'S' || tipoMedia == 's') {
      media += notas[i];
      printf("O somatório de notas desse aluno é: %.2f\n", media);
    }

  }

}

typedef struct {
  char procedimento;
  float notas[3];
} Aluno;

int main () {
  Aluno aluno;

  printf("Selecione o Procedimento:\n");
  printf("A - Media Aritmética\n");
  printf("P - Media Ponderada\n");
  printf("S - Somatório\n");
  printf("--> ");
  scanf("%c", &aluno.procedimento);

  for (int i = 0; i < 3; i++) {
    printf("Insira a nota %d: ", i+1);
    scanf("%f", &aluno.notas[i]);
  }

  MediaAluno(aluno.procedimento, aluno.notas);

  return 0;
}

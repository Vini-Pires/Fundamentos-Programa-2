/*
  3) Escreva um procedimento que recebe por parâmetro as 3 notas de um
  aluno e uma letra. Se a letra for A, o procedimento calcula a média
  aritmética das notas do aluno, se for P, a sua média ponderada 
  (pesos: 5, 3 e 2) e se for S, a soma das notas. O valor calculado também deve ser retornado 
  e exibido na função main.
*/

#include <stdio.h>
#include <stdlib.h>

float Somatorio();
float Ponderada();
float Aritmetica();

/**
 * @brief determina qual dos procedimentos de calculo serão usados
 * 
 * @param notas um vetor com os valores a serem calculados
 * @param procedimento um caracter indicando o procedimento a ser executado
 * @return float - resultado dos calculos
 */

float Procedimento (float notas[], char procedimento) {
  float retorno;
  if(procedimento == 'a' || procedimento == 'A') {
    // retorna a media aritmetica
    retorno = Aritmetica(notas);
  } else if (procedimento == 's' || procedimento == 'S') {
    // retorna a soma das notas
    retorno = Somatorio(notas);
  } else if (procedimento == 'p' || procedimento == 'P') {
    // retorna a media ponderada
    retorno = Ponderada(notas);
  }

  return retorno;
}

/**
 * @brief Soma os valores recebido
 * 
 * @param notas um vetor com valores a serem calculados
 * @return float - resultado da soma
 */

float Somatorio (float notas[]) {
  float somatorio = 0;
  for (int i = 0; i < 3; i++) {
    somatorio += notas[i];
  }

  return somatorio;
}

/**
 * @brief Realiza a media ponderada de tres valores recebidos com pesos 5, 3 e 2 respectivamente 
 * 
 * @param notas um vetor com valores a serem calculados
 * @return float - resultado da media ponderada
 */

float Ponderada (float notas[]) {
  float media = 0;
  media += notas[0]*5;
  media += notas[1]*3;
  media += notas[2]*2;
  media /= 8;

  return media;
}

/**
 * @brief Realiza a media aritmerica do vetor de notas
 * 
 * @param notas um vetor com os valores a serem calculados
 * @return float - resultado da media aritmetica
 */

float Aritmetica (float notas[]) {
  float media = 0;
  for (int i = 0; i < 3; i++) {
    media += notas[i];
  }
  media /= 3;

  return media;
}

typedef struct {
  char procedimento;
  float notas[3];
  float media;
} Aluno;


int main() {
  Aluno aluno;
  
  printf("Indique o procedimento\n");
  printf("A - Media aritmetica\n");
  printf("P - Media ponderada\n");
  printf("S - Soma das notas\n");
  printf("--> ");
  scanf("%c", &aluno.procedimento);

  printf("Insira as 3 notas\n");
  for (int i = 0; i < 3; i++) {
    printf("Nota %d: ", i+1);
    scanf("%f", &aluno.notas[i]);
  }

  aluno.media = Procedimento (aluno.notas, aluno.procedimento);

  printf("O calculo das notas desse aluno: %.2f\n", aluno.media);
  

  return 0;
}

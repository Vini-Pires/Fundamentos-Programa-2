/*
  1) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.
  
  2) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
  Dica: Procure pelo algoritmo BubbleSort no Google
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criar estrutura atleta

typedef struct {
  char nome[40];
  unsigned int idade;
  float altura;
  char esporte[40];
} Atleta;

// função que coleta e armazena os dados de 5 atletas
// função que determina o atleta mais alto e retorna seu nome
// função que coleta strings

void ColetaString();
void InsereAtleta();
void ExibeAtletaEmNovaOrdem();
void AtletaMaisAlto();
void BubbleSort();

int main() {
  const int TAM_MAX = 3;
  Atleta atleta[TAM_MAX];
  char resultado[40];

  InsereAtleta(atleta, TAM_MAX);
  AtletaMaisAlto(atleta, TAM_MAX, resultado);
  printf("O atleta mais alto e mais velho é %s\n", resultado);

  BubbleSort(atleta, TAM_MAX);
  ExibeAtletaEmNovaOrdem(atleta, TAM_MAX);

  return 0;
}

void ColetaString (char nome[], int tamanhoString) {
  setbuf(stdin, NULL);
  fgets(nome, tamanhoString - 1, stdin);
  nome[strcspn(nome, "\n")]= '\0';
}

void InsereAtleta (Atleta alt[], int qntdAtletas) {
  for (int i = 0; i < qntdAtletas; i++) {
    printf("Insira o nome do atleta %d: ", i+1);
    ColetaString(alt[i].nome, 40);
    
    printf("Insira a idade do atleta %d: ", i+1);
    scanf("%d", &alt[i].idade);
    
    printf("Insira a altura do atleta %d: ", i+1);
    scanf("%f", &alt[i].altura);

    printf("Insira o esporte do atleta %d: ", i+1);
    ColetaString(alt[i].esporte, 40);
  }
}

void AtletaMaisAlto (Atleta alt[], int qntdAtletas, char nome[]) {
  float oMaior = 0.0;
  unsigned int oMaisVelho = 0;
  int position;
  for (int i = 0; i < qntdAtletas; i++) {
    if(alt[i].altura > oMaior && alt[i].idade > oMaisVelho) {
      oMaior = alt[i].altura;
      oMaisVelho = alt[i].idade;
      position = i;
      i = 0;
    }
  }

  strcpy(nome, alt[position].nome);
  return;
}

void BubbleSort (Atleta alt[], int qntdAtletas) {
  
}

void ExibeAtletaEmNovaOrdem(Atleta alt[], int qntdAtletas) {
  for (int i = 0; i < qntdAtletas; i++) {
    printf("Nome: %15s | ", alt[i].nome);
    printf("Esporte: %15s | ", alt[i].esporte);
    printf("Idade: %4d | ", alt[i].idade);
    printf("Altura: %.2f |\n", alt[i].altura);
  }
}

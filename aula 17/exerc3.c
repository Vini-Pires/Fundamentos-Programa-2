/*
  3) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes
  passos:
    
    - a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve
    ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que
    posição do ranking essa banda está dentre as suas 5 bandas favoritas;
    
    - b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo
    passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
    
    - c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu
    programa deve exibir informações da banda cuja posição no seu ranking é a que foi
    solicitada pelo usuário;
    
    - d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com
    esse tipo de música no seu ranking.
    
    - e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está
    entre suas bandas favoritas ou não;
    
    - f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e
    todas as opções das questões passadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[201];
  char estiloMusical[201];
  unsigned int integrantes;
  unsigned int ordem;
} Bandas;


void coletaString (char nome[], int caracteresTotais) {
  setbuf(stdin, NULL);
  fgets(nome, caracteresTotais - 1, stdin);
  nome[strcspn(nome, "\n")]= '\0';
}

void PreencheBandas (Bandas ban[], int qntsBandas) {
  for (size_t i = 0; i < qntsBandas; i++) {
    printf("Qual o nome da banda? ");
    coletaString(ban[i].nome, 201);
    
    // printf("Qual o estilo musical? ");
    // coletaString(ban[i].estiloMusical, 201);

    // printf("Quantos integrantes essa banda possui? ");
    // scanf("%d", &ban[i].integrantes);

    printf("Qual a ordem dessa banda nas suas favoritas? ");
    scanf("%d", &ban[i].ordem);
  }
}

void ExibeBandas (Bandas ban[], int qntsBandas) {
  for (size_t i = 0; i < qntsBandas; i++){
    printf("Nome: %-s\n", ban[i].nome);
    // printf("Estilo: %-s\n", ban[i].estiloMusical);
    // printf("Quantidade de Integrantes: %d\n", ban[i].integrantes);
    printf("Ranking: %d\n", ban[i].ordem);
  }
  
}

void BuscaOrdem (Bandas ban[], int qntsBandas) {
  int busca;
  char encontrado[201];
  printf("Qual o id que deseja? ");
  scanf("%d", &busca);

  for (size_t i = 0; i < qntsBandas; i++){
    if (ban[i].ordem == busca){
      printf("Encontrado\n");
      printf("%-s\n",ban[i].nome);
    } else if (i + 1 == qntsBandas) {
      printf("Não Encontrado\n");
    }
  }
  
}

void BuscaNome (Bandas ban[], int qntsBandas) {
  char busca[201];
  printf("Insira o nome da banca que busca: ");
  coletaString(busca, 201);

  for (size_t i = 0; i < qntsBandas; i++) {
    if (strcasecmp(ban[i].nome, busca) == 0) {
      printf("Banda encontrada\n");
    } else if (i + 1 == qntsBandas) {
      printf("Nome da banda não encontrada\n");
    }
  }
  
}
 
int main () {
  const int TAMANHO_MAX = 4;
  Bandas ban[TAMANHO_MAX];

  PreencheBandas(ban, TAMANHO_MAX);
  // ExibeBandas(ban, TAMANHO_MAX);
  // BuscaNome(ban, TAMANHO_MAX);
  BuscaOrdem(ban, TAMANHO_MAX);

  return 0;
}

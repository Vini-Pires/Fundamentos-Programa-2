/*
  Você foi contratado pela Riot Games para elaborar partes do sistema sistema de Ranking do League of Legends. Para isso:

  a) Defina um tipo e estrutura para salvar os dados de jogadores para um Ranking.
  Cada jogador possui: nome, vitórias, derrotas, tier(nível) e pontos.

  Os tiers são: Bronze, Prata, Ouro, Platina, Diamante e Desafiante. Para organizar os níveis utilize uma enumeração.

  b) Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos, novos valores devem ser solicitados caso necessário.

  c) Exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador
    winrate = vitórias / (vitórias+derrotas) * 100.
    Cada calculo deve ser feito por meio de uma função adicional que recebe o número de vitórias e derrotas via cópia e retorna o winrate.

  d) Exiba uma tabela com os líderes (maior número de pontos) de cada um dos níveis. Para isso, faça uma função extra que receba um tier e retorne uma estrutura do tipo Jogador com os dados do líder.

  e) Faça a busca de um jogador pelo nome digitado. A busca deve ser feita por uma função adicional que recebe o nome e retorna os dados de vitórias, derrotas, tier e pontos via referência.

  f) Utilizando uma função recursiva, calcule a soma de todas as partidas (vitórias e derrotas) de todos os jogadores.

  Cada um dos itens de B a E deve ser implementada em uma função diferente.
  Não é permitido o uso de variáveis globais.
  Nas funções extras, caso necessário, utilize parâmetros adicionais.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {BRONZE = 1, PRATA, OURO, PLATINA, DIAMANTE, DESAFIANTE} Tier;

typedef struct {
  char nome[40];
  int vitorias;
  int derrotas;
  Tier tier;
  int pontos;
} Jogador;

void ColetaString (char nome[], int tamanho) {
  setbuf(stdin, NULL);
  fgets(nome, tamanho - 1, stdin);
  nome[strcspn(nome, '\n')] = "\0";
}

void ArmazenaJogadores (Jogador player[], int tamanho){
  for (int i = 0; i < tamanho; i++) {
    ColetaString(player[1].nome, 40);
    
    // Vitorias
    do {
      scanf("%d", &player[i].vitorias);  
    } while (player[i].vitorias < 0);
    
    // Derrotas
    do {
      scanf("%d", &player[i].derrotas);
    } while (player[i].derrotas < 0);

    // Tier
    do {
      scanf("%d", &player[i].tier);
    } while (player[i].tier < 1 || player[i].tier > 6);

  }
}

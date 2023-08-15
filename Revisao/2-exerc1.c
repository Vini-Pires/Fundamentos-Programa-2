#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Enunciado A

  char cidades[5][21];
  int servidores[5][3];

  for (int i = 0; i < 5; i++){
    setbuf(stdin, NULL);

    printf("Nome da Cidade: ");
    fgets(cidades[i], 20, stdin);
    cidades[i][strcspn(cidades[i], "\n")]='\0';

    do{
      printf("Servidores Ativos: ");
      scanf("%d", &servidores[i][0]);

      printf("Servidores Inativos: ");
      scanf("%d", &servidores[i][1]);

    } while (servidores[i][1] < 0 && servidores[i][1] < 0);        

  }
  printf("\n");
  // Enunciado B

  for (int i = 0; i < 5; i++){
    // total de servidores
    servidores[i][2] = servidores[i][0] + servidores[i][1];
  }
  
  // Enunciado C

  for (int i = 0; i < 5; i++){
    printf("| %-20s | %-5d | %-5d | %-5d |\n", 
          cidades[i], 
          servidores[i][0], 
          servidores[i][1], 
          servidores[i][2]
        );

  }
  printf("\n");
  // Enunciado D
  
  char busca[21];
  int cidadeEncontrada = 0;
  int idCidadeEncontrada;

  setbuf(stdin, NULL);

  printf("Digite a Cidade: ");
  fgets(busca, 20, stdin);
  busca[strcspn(busca, "\n")] = '\0';

  for (int i = 0; i < 5; i++) {
    if (strcasecmp(busca, cidades[i]) == 0) {
      cidadeEncontrada = 1;
      idCidadeEncontrada = i;
    }
  }
  
  if (cidadeEncontrada == 1) {
    printf("| %-20s | %5d | %5d | %5d |\n",
      cidades[idCidadeEncontrada],
      servidores[idCidadeEncontrada][0],
      servidores[idCidadeEncontrada][1],
      servidores[idCidadeEncontrada][2]
    );
  } else {
    printf("Cidade não encontrada.\n");
  }
  printf("\n");

  // Enunciado E

  float maiorPercentualServidoresProblematicos = 0;
  int servidorMaisProblematico;

  for (int i = 0; i < 5; i++) {
    float porcentagemAtual;
    porcentagemAtual = (100 * servidores[i][1])/servidores[i][2];
    if (porcentagemAtual > maiorPercentualServidoresProblematicos) {
      maiorPercentualServidoresProblematicos = porcentagemAtual;
      servidorMaisProblematico = i;
      i = 0;
    }
  }
  printf("Cidade com o maior percentual de servidores com problemas\n");
  printf("| %-20s | %.2f %|\n",
    cidades[servidorMaisProblematico],
    maiorPercentualServidoresProblematicos
  );
  printf("\n");

  // Enunciado F

  int totaisDeServidores = 0;
  int totaisAtivos = 0;
  int totaisInativos = 0;
  float porcentagemTotalAtivos;
  float porcentagemTotalInativos;
  char cabecalho[2][11] = {"Ativo", "Inativo"};

  for (int i = 0; i < 5; i++) {
    totaisDeServidores += servidores[i][2];
    totaisInativos += servidores[i][1];
    totaisAtivos += servidores[i][0];
  }

  porcentagemTotalAtivos = (100*totaisAtivos)/totaisDeServidores;
  porcentagemTotalInativos = (100*totaisInativos)/totaisDeServidores;

  printf("Porcentagem de todos os servidores\n");
  printf("| %-10s | %-10s |\n", cabecalho[0], cabecalho[1]);
  printf("| %-10.2f % | %-10.2f % |\n", 
    porcentagemTotalAtivos, 
    porcentagemTotalInativos
  );
  printf("\n");

  // Enunciado G

  char defeated[15] = " Defeated";

  for (int i = 0; i < 5; i++) {
    printf("%s ", cidades[i]);

    if (servidores[i][0] < servidores [i][1]) {
      strcat(cidades[i], defeated);
      printf("-> %s \n", cidades[i]);
    } else {
      printf("(sem alteração)\n");
    }
    
  }
  printf("\n");
  
  return 0;
}

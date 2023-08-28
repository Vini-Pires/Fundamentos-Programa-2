/*
  2) Crie um programa de cadastro que receba, armazene, e
  em seguida, exiba os dados de 5 pessoas.
    - Cada pessoa possui: nome, idade, peso, data de nascimento,
    brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
    caso estrangeiro, armazene o passaporte.
    - Regra: Utilize structs, typedef, union e enum.
*/

/*
  Problema para armazenar a quantidade de números dentro do cpf
  Possíveis soluções:
    Dividir quantos números são armazenados numa variável
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {JAN=1, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ} Meses;

typedef struct {
  int dia;
  Meses mes;
  int ano;
} Data;

typedef struct {
  char nome[30];
  int idade;
  float peso;
  Data dataDeNascimento;
  int nacionalidade;
  union {
    unsigned int cpf;
    unsigned int passaporte;
  } documento;
} Pessoa;

int main () {
  int MAX_PESSOAS_CADASTRADAS = 1;
  Pessoa pessoasCadastradas[MAX_PESSOAS_CADASTRADAS];

  for (int i = 0; i < MAX_PESSOAS_CADASTRADAS; i++) {
    
    // NOME
    printf("Insira seu nome (max 30 caracteres): ");
    setbuf(stdin, NULL);
    fgets(pessoasCadastradas[i].nome, 29, stdin);
    pessoasCadastradas[i].nome[
        strcspn(pessoasCadastradas[i].nome, "\n")
      ] = '\0';

    // IDADE
    printf("Insira sua idade: ");
    scanf("%d", &pessoasCadastradas[i].idade);

    // PESO
    printf("Insira seu peso: ");
    scanf("%f", &pessoasCadastradas[i].peso);

    // DATA DE NASCIMENTO
    printf("Insira sua data de nascimento: ");
    scanf("%d/%d/%d", 
      &pessoasCadastradas[i].dataDeNascimento.dia,
      &pessoasCadastradas[i].dataDeNascimento.mes,
      &pessoasCadastradas[i].dataDeNascimento.ano
    );

    // NACIONALIDADE
    do {
      printf("Qual sua nacionalidade:\n");
      printf("1 - Brasileiro\n");
      printf("2 - Estrangeiro\n");
      scanf("%d", &pessoasCadastradas[i].nacionalidade);
    } while (
        pessoasCadastradas[i].nacionalidade != 2 
        && 
        pessoasCadastradas[i].nacionalidade != 1
      );
    
    // CADASTRO DO DOCUMENTO
    if (pessoasCadastradas[i].nacionalidade == 1) {
      printf("Insira seu CPF: ");
      scanf("%d", &pessoasCadastradas[i].documento.cpf);
    } else if (pessoasCadastradas[i].nacionalidade == 2) {
      printf("Insira seu passaporte: ");
      scanf("%d", &pessoasCadastradas[i].documento.passaporte);
    }
    printf("\n");
    
  }

  // 
  for (int i = 0; i < MAX_PESSOAS_CADASTRADAS; i++) {
    printf("Nome: %s\n", pessoasCadastradas[i].nome);
    printf("Idade: %d\n", pessoasCadastradas[i].idade);
    printf("Peso: %.2f\n", pessoasCadastradas[i].peso);
    printf("Data de nascimento: %d/%d/%d\n", 
      pessoasCadastradas[i].dataDeNascimento.dia,
      pessoasCadastradas[i].dataDeNascimento.mes,
      pessoasCadastradas[i].dataDeNascimento.ano
    );
    printf("Nacionalidade: ");

    if (pessoasCadastradas[i].nacionalidade == 1) {
      printf("Brasileiro\n");
      printf("Numero do Documento: %d", pessoasCadastradas[i].documento.cpf);
    } else if (pessoasCadastradas[i].nacionalidade == 2) {
      printf("Estrangeiro\n");
      printf("Numero do Documento: %d", pessoasCadastradas[i].documento.passaporte);
    } else {
      printf("Problema no cadastro");
    }
    printf("\n");
    printf("\n");

  }

  return 0;
}

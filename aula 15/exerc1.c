/*
  1) Crie uma enumeração representando os meses do ano.
  Agora, escreva um programa que leia um valor inteiro do
  teclado e exiba o nome do mês correspondente e a
  quantidade de dias que ele possui.
*/

#include <stdio.h>
#include <stdlib.h>

// Por normalização eh necessário o uso de variáveis com letras maiúsculas para 
// indicar que não se deve alterar
typedef enum {JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ} Meses;

int main() {
  // pegar valor do teclado
  // exibir o mes correspondente num vetor
  // desse valor do teclado informar qnts dias ha nesse mes

  int mesPedido;
  char meses[][30] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  int qntdDeDias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  printf("Insira o número do mês: ");
  scanf("%d", &mesPedido);
  mesPedido--;

  switch (mesPedido){
    case JAN:
      printf("Mês pedido foi %s\n", meses[JAN]);
      printf("Ele possui %d dias\n", qntdDeDias[JAN]);
      break;
    case FEV:
      printf("Mês pedido foi %s\n", meses[FEV]);
      printf("Ele possui %d dias\n", qntdDeDias[FEV]);
      break;
    case MAR:
      printf("Mês pedido foi %s\n", meses[MAR]);
      printf("Ele possui %d dias\n", qntdDeDias[MAR]);
      break;
    case ABR:
      printf("Mês pedido foi %s\n", meses[ABR]);
      printf("Ele possui %d dias\n", qntdDeDias[ABR]);
      break;
    case MAI:
      printf("Mês pedido foi %s\n", meses[MAI]);
      printf("Ele possui %d dias\n", qntdDeDias[MAI]);
      break;
    case JUN:
      printf("Mês pedido foi %s\n", meses[JUN]);
      printf("Ele possui %d dias\n", qntdDeDias[JUN]);
      break;
    case JUL:
      printf("Mês pedido foi %s\n", meses[JUL]);
      printf("Ele possui %d dias\n", qntdDeDias[JUL]);
      break;
    case AGO:
      printf("Mês pedido foi %s\n", meses[AGO]);
      printf("Ele possui %d dias\n", qntdDeDias[AGO]);
      break;
    case SET:
      printf("Mês pedido foi %s\n", meses[SET]);
      printf("Ele possui %d dias\n", qntdDeDias[SET]);
      break;
    case OUT:
      printf("Mês pedido foi %s\n", meses[OUT]);
      printf("Ele possui %d dias\n", qntdDeDias[OUT]);
      break;
    case NOV:
      printf("Mês pedido foi %s\n", meses[NOV]);
      printf("Ele possui %d dias\n", qntdDeDias[NOV]);
      break;
    case DEZ:
      printf("Mês pedido foi %s\n", meses[DEZ]);
      printf("Ele possui %d dias\n", qntdDeDias[DEZ]);
      break;
    
    default:
      printf("Insira um número de mês valido\n");
      break;
  }

  return 0;
}

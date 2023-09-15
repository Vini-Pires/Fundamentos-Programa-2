/*
  4) Faça uma função recursiva que retorne o n-ésimo termo da sequência de
  Fibonacci, sendo que n é recebido por parâmetro. Utilize essa função para
  desenvolver um programa que mostre no main() os n termos dessa
  sequência na tela, a partir do valor de n recebido pelo teclado. 
  Sabe-se que o 1º termo é 0 e o 2º termo é 1.
*/
// Sequencia de Fibonacci
// 0 1 1 2 3 5 8 13 21 ...

#include <stdio.h>
#include <stdlib.h>

void Fibonacci (int termosQueSeraoExibidos, int termo1, int termo2) {
  int soma = 0;
  
  
  if (termosQueSeraoExibidos == 0 && termo1 == 0) {
    printf("Nenhuma geração requisitada\n");
  }
  
  if (termosQueSeraoExibidos == 0 && termo1 != 0) {
    printf("\n");
  } else if (termosQueSeraoExibidos != 0 && termo1 == 0 ) {
    if (termo1 == 0) {
      printf("%d %d ", termo1, termo2);
    }
    soma = termo1 + termo2;
    termo1 = termo2;
    termo2 = soma;

    printf("%d ", soma);
    Fibonacci(termosQueSeraoExibidos - 1, termo1, termo2);

  }

}

int main() {
  const int primeiroTermo = 0;
  const int segundoTermo = 1;
  int geracao;

  printf("Até qual geração deseja que exiba? ");
  scanf("%d", &geracao);

  Fibonacci(geracao, primeiroTermo, segundoTermo);

  return 0;
}

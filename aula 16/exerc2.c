/*
  2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
  altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
  utilize as fórmulas a seguir.
  - Para homens: (72.7 * altura) - 58
  - Para mulheres: (62.1 * altura) - 44.7
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Função recebe o sexo e a altura de uma pessoa 
 * para retornar o peso ideal de seu sexo
 * 
 * @param sexo carácteres esperados são 'm' e 'h', indicando mulher ou homem
 * @param altura esperado receber altura em metros para o calculo
 * @return float - retorna o peso ideal da pessoa
 */

float PesoIdeal (char sexo, float altura) {
  float peso;
  if (sexo == 'm' || sexo == 'M') {
    peso = (62.1 * altura) - 44.7;
  } else if (sexo == 'h' || sexo == 'H'){
    peso = (72.7 * altura) - 58;
  }

  return peso;
}

typedef struct {
  char sexo;
  float altura;
  float pesoIdeal;
} Pessoa;


int main () {
  Pessoa pessoaRequisitada;

  printf("Informe sua altura em metros: ");
  scanf("%f", &pessoaRequisitada.altura);

  setbuf(stdin, NULL);
  printf("Informe o sexo biológico\n");
  printf("M - Mulher\n");
  printf("H - Homem\n");
  printf("--> ");
  scanf("%c", &pessoaRequisitada.sexo);

  pessoaRequisitada.pesoIdeal = PesoIdeal(pessoaRequisitada.sexo, pessoaRequisitada.altura);
  printf("Seu peso ideal é: %.2f\n", pessoaRequisitada.pesoIdeal);

  return 0;
}

/* 
  1) Crie uma estrutura para representar as coordenadas de
  um ponto no plano (posições X e Y). Em seguida, declare
  e leia do teclado dois pontos e exiba a distância entre
  eles. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  float pontoX;
  float pontoY;
} Coordenadas;


int main () {
  Coordenadas coord[2];
  double dist;
  float potenciaX, potenciaY;
 
  for (int i = 0; i < 2; i++){
    printf("Insira o ponto %d\n", i+1);
    printf("Ponto X: ");
    scanf("%f", &coord[i].pontoX);
    printf("Ponto Y: ");
    scanf("%f", &coord[i].pontoY);
  }
  
  // Não esta compilando na minha maquina, sem motivo aparente
  // No compilador online funcionou perfeitamente
  potenciaX = pow((coord[1].pontoX - coord[0].pontoX), 2);
  potenciaY = pow((coord[1].pontoY - coord[0].pontoY), 2);
  dist = sqrt(potenciaX + potenciaY);

  printf("%.2f\n", dist);
  
  return 0;
}

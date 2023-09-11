/*
  1) Escreva um programa que receba um número inteiro
  representando a quantidade total de segundos e, usando
  passagem de parâmetros por referência, converta a
  quantidade informada de segundos em Horas, Minutos e
  Segundos. Imprima o resultado da conversão no formato
  HH:MM:SS. Utilize o seguinte protótipo da função:
    void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/

#include <stdio.h>
#include <stdlib.h>

void converteHora(int totalSegundos, int* hora, int* min, int* seg) {
  *min = totalSegundos / 60;
  *hora = *min / 60;

  *seg = totalSegundos - (*min * 60);
  *min = *min - (*hora * 60);
  
  return;
}

int main() {
  int segundosTotais;
  int hora;
  int min;
  int seg;

  printf("Informe a quantidade total de segundos: ");
  scanf("%d", &segundosTotais);
  converteHora(segundosTotais, &hora, &min, &seg);

  printf("%02d h %02d min %02d seg\n", 
      hora,
      min,
      seg
    );

  return 0;
}

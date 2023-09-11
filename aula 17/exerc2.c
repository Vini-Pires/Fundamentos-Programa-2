/*
  2) Reescreva o exercício anterior utilizando a estrutura horário
  (contendo hora, minuto e segundo) e passando a estrutura por
  referência. Utilize o seguinte protótipo da função:
    void converteHorario(int total_segundos, Horario* hor) 
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int hora;
  int min;
  int seg;
} Horario;

void converteHora(int totalSegundos, Horario* hor) {
  hor->min = totalSegundos / 60;
  hor->hora = hor->min / 60;

  hor->seg = totalSegundos - (hor->min * 60);
  hor->min -= (hor->hora * 60);
  
  return;
}

int main() {
  int segundos;
  Horario horas;

  printf("Informe a quantidade total de segundos: ");
  scanf("%d", &segundos);
  converteHora(segundos, &horas);

  printf("%02d h %02d min %02d seg\n", 
      horas.hora,
      horas.min,
      horas.seg
    );

  return 0;
}

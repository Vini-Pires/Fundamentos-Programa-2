/*
  2) Escreva um trecho de código para fazer a criação dos
  novos tipos de dados conforme solicitado abaixo:
  - Horário: composto de hora, minutos e segundos.
  - Data: composto de dia, mês e ano.
  - Compromisso: local, horário e texto que descreve o
  compromisso.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int hora;
  int minuto;
  int segundo;
} Horario;

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  char local[255];
  Horario horarioCompromisso;
  Data dataCompromisso;
  char descricao[255];
} Compromisso;


int main() {
  return 0;
}

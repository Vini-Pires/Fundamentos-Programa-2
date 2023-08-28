#include <stdio.h>
#include <stdlib.h>

union Numero{
  int inteiro;
  float real;
};


int main(){
  union Numero numero;

  numero.inteiro = 15;
  numero.real = 3.14;

  printf("%f\n", numero.real);
  printf("%d\n", numero.inteiro);

  return 0;
}

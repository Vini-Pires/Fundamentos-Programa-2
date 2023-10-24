#include "../../2-headers/libs-padrao.h"
#define MAIOR(x,y)x>y?x:y
/*
  definição de função com operador ternário
  MAIOR (int x, int y) {
    if (x > y) {
      printf("x");
    } else {
      print("Y");
    }
  }
*/

int main() {

  // Verifica se a Macro existe (spoiler: existe)
  #ifdef MAIOR
    printf("Macro existente\n");
  #else
    printf("Macro inexistente\n");
  #endif

  #undef MAIOR // Retira a definição de uma macro

  // Verifica se a Macro existe (spoiler: não existe pq foi feita sua retirada)
  #ifdef MAIOR
    printf("Macro existente\n");
  #else
    printf("Macro inexistente\n");
  #endif

  return 0;
}

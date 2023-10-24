#include "1-cripto.h"

void criptografia(char *msg) {
  while(*msg != '\0') {
    *msg = (*msg) + 2;
    msg++;
  }
}

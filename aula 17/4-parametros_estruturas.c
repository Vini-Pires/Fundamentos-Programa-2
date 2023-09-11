#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y
} Ponto;

void incrementa(Ponto* p) {
  p->x++;
  p->y++;
  
  return;
}  // incrementa

int main() {
  Ponto p1 = {1, 2};
  
  incrementa(&p1);
  printf("(%d, %d)\n", p1.x, p1.y);
  
  return 0;
}  // main

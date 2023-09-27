#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr = (int*) 0x5DC;

  printf("Endereço armazenado: %p - %d\n", ptr, ptr); // 1500
  ptr++;
  printf("Endereço armazenado: %p - %d\n", ptr, ptr); // 1504
  ptr += 15;
  printf("Endereço armazenado: %p - %d\n", ptr, ptr); // 1564
  ptr -= 2;
  printf("Endereço armazenado: %p - %d\n", ptr, ptr); // 1556

  int valor1 = 10, valor2 = 10;
  int *ptr1, *ptr2;

  ptr1 = &valor1;
  ptr2 = &valor2;

  // compara endereços de memória
  if (ptr1 == ptr2) {
    printf("Ponteiros iguais\n");
  } else {
    printf("Ponteiros diferentes\n");
  }

  // compara valores apontados
  if (*ptr1 == *ptr2) {
    printf("Valores iguais\n");
  } else {
    printf("Valores diferentes\n");
  }
  


  return 0;
}

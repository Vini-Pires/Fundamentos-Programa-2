#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade = 18;
  // por boas praticas ao declarar um ponteiro usar um prefixo "ptr"
  int* ptr_idade;
  // referenciação 
  ptr_idade = &idade; // int 0x4005 = 0x4002; 

  printf("Idade: %d\n", idade);
  printf("Idade: %d\n", *ptr_idade); // dereferenciação

  // para exibir o endereço de memória usamos "%p"
  printf("Idade salva no endereço de memoria: %p\n", ptr_idade);
  printf("Idade salva no endereço de memoria: %p\n", &idade);

  printf("Endereço de memoria do ponteiro: %p\n", &ptr_idade);
  
  // Erro => por tentar acessar um endereço de memória além do permitido pro programa
  // *idade; ele tenta acessar o endereço de memória 18

  return 0;
}

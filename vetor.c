#include <stdio.h>
#include <stdlib.h>

int main() {
    
  int *ponteiro; 
  int cont, quant_numeros, novo_num, soma;
  quant_numeros = 12;
  ponteiro = (int *) malloc(quant_numeros * sizeof(int));

  printf("Digite 12 valores para o vetor");
  printf("\n==============================================\n");
  
  for (cont = 0; cont < quant_numeros; cont++)
  {
    printf("Digite o %dº valor para o vetor: ", cont+1);
    scanf("%i",&ponteiro[cont]);
  }
  
  novo_num = 10;
  soma = quant_numeros + novo_num;
  ponteiro = (int *) realloc(ponteiro, soma * sizeof (int));
  
  printf("\nDigite mais 10 valores para o vetor");
  printf("\n==============================================\n");
  
  for (cont = cont; cont < soma; cont++)
  {
    printf("Digite o %dº valor para o vetor: ", cont+1);
    scanf("%i",&ponteiro[cont]);
  }
  
  printf("\n======== Todos os 22 valores do vetor ========\n");
  
  for (cont = 0;cont < soma; cont++)
  {
    printf("%.2i ",ponteiro[cont]);
  }
    
  free(ponteiro);
    
  return 0;
}

#include <stdio.h>

int main(){
  int valor;
  
  printf("Digite um valor:\n");
  scanf("%d",&valor);
  
  printf("Valor antecessor= %d\nValor sucessor= %d\n", valor-1, valor+1);
  
}

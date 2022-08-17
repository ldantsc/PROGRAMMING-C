#include <stdio.h>

int main(){

float valorProduto, total;


printf("Digite o valor do produto:\n");
 scanf("%f", &valorProduto);
 
 total = valorProduto-(valorProduto*0.1);
 
 printf("\nValor com desconto: %.2f ", total);
return 0;
}

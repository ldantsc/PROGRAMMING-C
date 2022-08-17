#include <stdio.h>

int main(){
 
 int num, antecessor, sucessor;

printf("Digite um numero qualquer:\n");
scanf("%d", &num);
   antecessor = num - 1;
   sucessor = num + 1;
   
printf("O numero e: %d\nsucessor: %d\nAntecessor: %d\n", num, sucessor, antecessor);
return 0;
}

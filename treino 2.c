#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int a, b, x;
	char nome;
	
	printf("Digite seu nome:\n");
	scanf("%d",&nome);
	
	printf ("Digite um valor:\n");
	scanf ("%d",&a);
	
	printf("Digite outro valor:\n");
	scanf("%d",&b);
		
	x = a+b;
	
	printf("O valor e = %d\n", x);
	
	system ("pause");
	return(0);
}

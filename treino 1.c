//bibliotecas (stdio = essa biblioteca � respons�vel pelas fun��es de entradas e sa�das)
#include <stdio.h>

int main(){
	
	//declara��o de variaveis do tipo inteiro
	int a,b, soma;
	
	printf ("Digite um numero:\n");
	scanf ("%d",&a); //recebe um inteiro e armazena a variavel a
	
	printf ("Digite outro numero:\n");
	scanf ("%d",&b); // ' ' ' ' b
	
	soma = a+b; //efetua a adicao e armazena a variavel soma
	
	printf("O valor da soma = %d\n",soma); //mostra mensagem como resultado
	
}

#include <stdio.h>
#include <locale.h>


int main(){
	
	//verificar se um numero esta em um intervalo de 1 até 10
	int numero;
	printf("informe um numero: ");
	scanf("%d", &numero);
	
	if(!(numero>=1 && numero<=10)){
		printf("o numero nao esta dentro do intervalo: \n");
	} else{
		printf("o numero esta dentro do intervalo: \n");
	}
	
	
}

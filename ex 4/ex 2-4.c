#include <stdio.h>
/*Solicitar um numero entre 1 e 4
Se a pessoa digitar um numero diferente, mostrar 
a mensagem "entrada invalida" e solicitar o numero
novamente. Se digitar correto mostrar o numero digitado*/
int main(){
	int numero; // declarar variavel
	do{         //estrutura do while
	printf("Digite um numero de 1 a 4: ");
	scanf("%d",&numero);
	if(numero <1 || numero >4){  //if, verificar se esse se o numero lido � invalido ou n�o 
		printf("Entrada invalida\n");
	}
	}while(numero <1 || numero >4); //criterio de execu��o/loop
	printf("Numeros Informados: %d\n",numero); 
	return 0;
}

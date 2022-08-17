#include <stdio.h>

int main(){
//var	
float numero, soma=0, media;
int contador=0,qtdValores;	
//loop
printf("informe a quantidade de numeros para calcular a media:");
scanf("%d", &qtdValores);
	while(contador < qtdValores){
		printf("informe o %d valor: ", contador+1);
		scanf("%f", &numero);
		soma += numero;
		contador++;
	}
	printf("soma: %.2f ", soma);
	media = soma/(contador - 1);
	printf("media: %.2f\n", media);
	//printf("=>> %d\n", contador);
}

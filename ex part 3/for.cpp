#include <stdio.h>

int main(){
	
	float numero, soma=0, media;
	int contador;
	
	for(contador = 1; contador <=3; contador++){
		printf("informe %d o valor da media: ", contador);
		printf("informe %d o valor da media: ", contador);
		scanf("%f", &numero);
		
		soma += numero;
	}
	
	media = soma / (contador-1);
	
	printf("Media = %.1f\n", media);
	printf("contador = %d", contador);
}

#include <stdio.h>

int main(){
	int numero, soma=0;
	
	for(numero = 0; numero <=100; numero++){
		if (numero %2 ==0){
		soma += numero;
	}
}
printf("%d\n", soma);
}

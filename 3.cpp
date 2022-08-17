#include <stdio.h>

int main(){
	
	int vet[5], cont, a;
	
	for(a=0; a < 5; a++){
		printf("\n\nDigite um numero qualquer:");
		scanf("%d", &vet[a]);
	}
	cont = 0;
	
	for(a = 0; a < 5; a++){
		if(vet[a] > 100)
		cont = cont + 1;
	}
	
	printf("\n\nExistem %d valores acima de 100", cont);
	
	
}

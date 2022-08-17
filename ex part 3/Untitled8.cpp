#include <stdio.h>

int main(){
	
	int valorA, valorB;
	
	printf("informe um numero: ");
	scanf("%d", &valorA);
		
		printf("informe outro numero: ");
		scanf("%d", &valorB);
	
	
					if(valorA == 0) {
						printf("O segundo valor é zero");
					} 
					else
					{
						if(valorA % 2 == 0 && valorA % valorB == 0)
						printf("O primeiro numero é par e divisivel pelo segundo\n");
					} 
					else
					{
						printf("O primeiro numero nao é ou o primeiro  divisel pelo segundo");
					}
					
}

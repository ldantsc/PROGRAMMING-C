#include <stdio.h>

int main(){
	int numA, numB;
	
	printf("Informe um numero: ");
	scanf("%d", &numA);
	printf("Informe outro numero: ");
	scanf("%d", &numB);
	
	if (numA != numB) {
		if(numA > numB) {
			printf("Numero maior: %d", numA);
			} else {
				printf("Numero maior: %d", numB);
			}} else {
		printf("Numeros iguais!");		
		}
	}

#include <stdio.h>

int main(){
	
	int varA = 10, varB= 20, aux;
	
	
	aux = varA;
	varA = varB;
	varB = aux;
	
	printf("A= %d\nB= %d\n",varA, varB);
	
	
}

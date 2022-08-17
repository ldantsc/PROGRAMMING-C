#include <stdio.h>

int main(){
	int contador, contador2;
	
	for(contador = 1; contador <= 10; contador++){
			for(contador2 = 0; contador2 <=10; contador2++){
			printf("%d x %d = %d\n", contador, contador2, contador*contador2);
			}	
			printf("\n");
		}

}

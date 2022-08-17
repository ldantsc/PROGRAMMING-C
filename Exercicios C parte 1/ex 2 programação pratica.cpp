#include <stdio.h>
#include <math.h>

int main(){
	
	float quilogramas, altura, imc;
	
	printf("Digite seu peso:\n ");
	  scanf("%f", &quilogramas);
		printf("Digite seu altura:\n ");
	      scanf("%f", &altura);
	      
	    imc = quilogramas/(altura*altura);
	    
    printf("O seu IMC e: %.2f", imc);
    return 0;
}

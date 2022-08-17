#include <stdio.h>

int main(){

float numero=0, soma=0, media;
int contador=0;	

while(numero >= 0){
	printf("Informe o %d valor:",contador+1);
	scanf("%f", &numero);
	if(numero >=0){
		soma+=numero;
	    contador ++;	
	}
}
printf("soma: %2.f", soma);
media = soma /contador;
printf("O valor da media e: %.2f", media);

return 0;
}

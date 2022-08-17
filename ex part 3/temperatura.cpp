#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float temperaturaC, temperaturaF;
	
	printf("\tConversor de Temperatura de Celsius para Farenheit\n\t**************************************************");
	printf("\n\nDigite a temperatura em Celsius: ");
	scanf("%f", &temperaturaC);
	
	temperaturaF = ((9*temperaturaC)/5)+32;
	
	printf("\n\nTemperatura em Farenheit: %.2f\n\n", temperaturaF);
	
	return 0;
}

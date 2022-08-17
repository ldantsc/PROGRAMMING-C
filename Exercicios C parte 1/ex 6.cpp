#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portugueses");
	
	int anos, meses, dias, totalDias;
	
	printf("Informe o ano: ");
	scanf("%d", &anos);
	printf("Informe o mes: ");
	scanf("%d", &meses);
	printf("Informe o dia: ");
	scanf("%d", &dias);
	
	totalDias = (anos*365)+(meses*30)+dias;
	printf("dias: %d", totalDias);
	
	
	
}

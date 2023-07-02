#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int qntLaranjas;
	float valor;
	
	printf("Informe quantas laranjas quer comprar: ");
	scanf("%d", &qntLaranjas);
	
	if(qntLaranjas >= 12){
		valor = qntLaranjas*0.25;
		}
	else
	{
	valor = qntLaranjas*0.30;
}
    printf("Valor da compra: R$ %.2f", valor);
}

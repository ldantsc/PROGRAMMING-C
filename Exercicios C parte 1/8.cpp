#include <stdio.h>

int main(){
	
	float salarioAtual, salarioNovo, percReajuste;
	
	printf("Salario mensal atual: ");
	scanf("%f", &salarioAtual);
	printf("Percentual de reajuste: ");
	scanf("%f", &percReajuste);

	salarioNovo = salarioAtual + (salarioAtual * (percReajuste/100.0));
	
printf("Salario novo: R$ %.2f", salarioNovo);
return 0;

}

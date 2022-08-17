#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	float salarioRecebido, totalGasto;
	
	printf("Informe o salario recebido: ");
	scanf("%f", &salarioRecebido);
	printf("Informe o total de gastos do mes: ");
	scanf("%f", &totalGasto);
	
	if(salarioRecebido >= totalGasto){
		printf("Gastos dentro do orçamento!");
	}else{
		printf("Orçamento estourado");
	}
	
}

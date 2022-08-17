#include <stdio.h>
#include <locale.h>

struct produto{
	int cod;
	float valor;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct produto p;
	
	printf("Digite o codigo do produto:\n");
	scanf("%d", &p.cod);
	
	printf("Digite o valor do produto em reais:\n");
	scanf("%f", &p.valor);
	
	printf("Os dados são:\n");
	printf("codigo: %d.\n", p.cod);
	printf("valor: R$ %.2f.\n", p.valor);
}

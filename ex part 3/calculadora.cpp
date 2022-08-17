#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float numA,numB,x;
	char cont[15];
	
	printf("Digite um numero: \n\n ");
	scanf("%f", &numA);
	fflush(stdin);
	printf("\nTipo de conta\t\tDigite");
	printf("\n\n\Soma\t\t\tsoma\nSubtração\t\tsubtracao\nDivisão\t\t\tdivisao\nMultiplicação\t\tmultiplicacao\n\n");
	scanf("%s", &cont);
	printf("\nDigite outro numero: \n\n ");
	scanf("%f", &numB);
	
	switch(cont[15]){
		case 'soma':
		if(x = numA+numB){
		printf("\nA soma de %f + %f é igual a: %.2f\n",numA, numB, x);
		}
		
		break;
	    
	    case 'subtracao':
		x = numA-numB;
		printf("\nA subtração de %f - %f é igual a: %.2f\n",numA, numB, x);
		break;
		
		case 'divisao':
		x = numA/numB;
		printf("\nA divisão de %f / %f é igual a: %.2f\n",numA, numB, x);
		break;
		
		case 'multiplicacao':
		x = numA*numB;
		printf("\nA multiplicacao de %f x %f é igual a: %.2f\n",numA, numB, x);
		break;
		
		default:
			printf("\nOperação inválida");
	}
	
	return 0;
	
}

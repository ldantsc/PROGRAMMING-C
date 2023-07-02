//char não suporta switch case no C quando indicado um vetor ex: char cont[15] somente int e char(1 caractere)


#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float numA,numB,x;
    char cont;

    printf("Digite um numero: \n\n ");
    scanf("%f", &numA);
    fflush(stdin);
    printf("\nTipo de conta\t\tDigite");
    printf("\n\n\Soma\t\t\ts\nSubtração\t\tm\nDivisão\t\t\td\nMultiplicação\t\tm\n\n");
    scanf("%s", &cont);
    printf("\nDigite outro numero: \n\n ");
    scanf("%f", &numB);

    switch(cont){
        case 's':
        if(x = numA+numB){
        printf("\nA soma de %.2f + %.2f é igual a: %.2f\n",numA, numB, x);
        }

        break;

        case 'n':
        x = numA-numB;
        printf("\nA subtração de %.2f - %.2f é igual a: %.2f\n",numA, numB, x);
        break;

        case 'd':
        if(numB != 0) {
		x = numA/numB;
        printf("\nA divisão de %.2f / %.2f é igual a: %.2f\n",numA, numB, x);
		}else{
			printf("Erro, divisivel por zero");
		}
        break;

        case 'm':
        x = numA*numB;
        printf("\nA multiplicacao de %.2f x %.2f é igual a: %.2f\n",numA, numB, x);
        break;

        default:
            printf("\nOperação inválida");
    }

    return 0;

}

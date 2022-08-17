#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int valor_1, valor_2, total1,total2,total3,total4;
int tipConta;

printf("valor 1\n\n");
scanf("%d", &valor_1);

printf("\n\nvalor 2\n\n");
scanf("%d", &valor_2);

printf("\n\n Tipo da conta \n\n1.soma \n2.subtracao \n3.multiplicacao \n4.divisao\n\n");
scanf("%d", &tipConta);

   switch(tipConta)
{
   case 1:
     total1 = valor_1 + valor_2;
     printf("\nA soma do valor %d e %d e igual a: %d\n", valor_1, valor_2, total1);
     break;
   case 2:
   	 total2 = valor_1 - valor_2;
     printf("\nA subtracao do valor %d e %d e igual a: %d\n", valor_1, valor_2, total2);
     break;
   case 3:
   	 total3 = valor_1 * valor_2;
     printf("\nA multiplicacao do valor %d e %d e igual a: %d\n", valor_1, valor_2, total3);
     break;
   case 4:
   	 total4 = valor_1 / valor_2;
     printf("\nA divisao do valor %d e %d e igual a: %d\n", valor_1, valor_2, total4);
     break;
    default:
    	printf("Valor Invalido\n");
    	break;
}

	
	
	return 0;
}

#include <stdio.h>

int main(){
	
	float a, b, x;
	char calc;
	
	printf("Digite um numero");
	scanf("%f", &a);
	fflush(stdin);
	printf("a.soma b.subtracao c. divisao. d. multiplicacao");
	scanf("%s", &calc);
	printf("Digite um numero");
	scanf("%f", &b);
	
	
	switch(calc){
		case 'a':
		x = a+b;
		printf("%f + %f = %f", a, b, x);
		break;
		
		case 'b':
		x = a-b;
		printf("%f - %f = %f", a, b, x);
		break;
		
		case 'c':
		x = a/b;
		printf("%f / %f = %f", a, b, x);
		break;
		
		case 'd':
		x = a*b;
		printf("%f * %f = %f", a, b, x);
		break;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	//var
	float a, b, c, d, x;
	
	printf("M�dia de Notas.\n");
	 printf("Digite a primeira nota:\n");
	 scanf("%f", &a);
	  printf("Digite a segunda nota: \n");
	  scanf("%f", &b);
	    printf("Digite a terceira nota: \n");
	    scanf("%f", &c);
	      printf("Digite a quarta nota: \n");
	      scanf("%f", &d);
	
	//calculo m�dia - formula
	 
	 x = (a+b+c+d) / 4;
	
	//se - ou
	
	 if(x >= 5){
	 	printf("Sua m�dia �: %.1f\n", x);
	 	printf("Voc� foi Aprovado!");
	 
	 } else {
	 	printf("Sua m�dia �: %.1f\n", x);
	 	printf("Voc� foi Reprovado.\n");
	 }
	 
	 system("pause");
	 return 0;
}

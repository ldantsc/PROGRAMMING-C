//bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale>

// 3 notas - média - aprovado ou não aprovado
int main(void){
	
	//idioma
	
	setlocale (LC_ALL, "Portuguese");
	
	//declarar variaveis
	
	float nota1, nota2, nota3, media;
	
	printf ("Média de 3 notas se aprovado ou não!\n");
	printf ("Primeira nota: \n");
	  scanf ("%f", &nota1);
	
	printf ("Segunda nota: \n");
	  scanf ("%f", &nota2);
	
	printf ("Terceira nota: \n");
	  scanf ("%f", &nota3);
	  
	  //calcular media das 3 notas (dividir por 3)
	  
	  media = (nota1 + nota2 + nota3) / 3;
	  
	  //se aprovar = 5 ou +
	     if(media >= 5){
	     	printf ("Sua média é: %.1f\n", media);
			 printf ("Você foi Aprovado!\n");
			 		 }
	  //se não aprovar 5 ou -
	        else {
	        	printf ("Sua média é: %.1f\n", media);
	              printf("Você foi Reprovado.\n");
			 }
			 
    system("pause");
    ret


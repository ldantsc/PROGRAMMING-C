//bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale>

// 3 notas - m�dia - aprovado ou n�o aprovado
int main(void){
	
	//idioma
	
	setlocale (LC_ALL, "Portuguese");
	
	//declarar variaveis
	
	float nota1, nota2, nota3, media;
	
	printf ("M�dia de 3 notas se aprovado ou n�o!\n");
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
	     	printf ("Sua m�dia �: %.1f\n", media);
			 printf ("Voc� foi Aprovado!\n");
			 		 }
	  //se n�o aprovar 5 ou -
	        else {
	        	printf ("Sua m�dia �: %.1f\n", media);
	              printf("Voc� foi Reprovado.\n");
			 }
			 
    system("pause");
    ret


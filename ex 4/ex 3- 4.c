#include <stdio.h>
#include <locale.h>//biblioteca para exibir acentua��es de caracteres/setlocale(idioma/regi�o)

/*
Fazer um programa que receba um valor n
no teclado e determine o maior.
A condi��o de t�rmino do pragrama � quand o usu�rio digitar zero.
*/
int main(){
	setlocale(LC_ALL, "portuguese");//
 int valor,maior; //declarar variaveis
 	
		while(valor !=0){ //enquanto o valor for diferente de 0 o programa prossegue fazendo leituras, se digitar zero o loop se encerra
	    printf("Digite um valor: "); //leitura inicial
 	    scanf("%d", &valor);
		
			if(valor > maior){ //se valor for > maior que o valor antigo
				maior = valor; //atribui��o da variavel valor para variavel maior
			}
		}
		printf("Maior: %d\n", maior); //exibir o numero maior informado/criterio de saida
		return 0;
}

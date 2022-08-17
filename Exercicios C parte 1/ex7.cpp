#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	
	setlocale(LC_ALL, "portugueses");
	
	int totalEleitores, votosBrancos, votosNulos, votosValidos;
	float percVotosBrancos, percVotosNulos, percVotosValidos;
	
	printf("Informe o total de eleitores: ");
	 scanf("%d",&totalEleitores);
    printf("Informe a quantidade de votos brancos: ");
	 scanf("%d",&votosBrancos);
	printf("Informe a quantidade de votos nulos: ");
	 scanf("%d",&votosNulos);
	printf("Informe a quantidade de votos validos: ");
	 scanf("%d",&votosValidos);
	 
	 percVotosBrancos = ((float)votosBrancos/(float)totalEleitores)*100;
	 percVotosNulos = ((float)votosNulos/(float)totalEleitores)*100;
	 percVotosValidos = ((float)votosValidos/(float)totalEleitores)*100;
	 
	 printf("Votos Brancos: %.2f%%\n Votos Nulos: %.2f%\n Votos Validos: %.2f%%\n", percVotosBrancos, percVotosNulos, percVotosValidos);
	 system("pause");
	 return 5;
}

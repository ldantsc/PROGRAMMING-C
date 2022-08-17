#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	int anoNascimento;
	
	printf("Digite a data de nascimento(ano): ");
	scanf("%d", &anoNascimento);
	
	if(anoNascimento <= 2005)
	{
	printf("Pode votar!");
	} else{
		printf("Não pode votar!");
	}
	
}

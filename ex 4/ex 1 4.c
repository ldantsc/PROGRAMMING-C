#include <stdio.h>

/*Solicitar a idade de varias pessoas e imprimir:
Total de pessoas com menos de 21 anos
Total de pessoas com mais de 50 anos
O programa termina quando for informada uma idade negativa.*/
int main(){
	int idade;
	int totalPessoasMenosQ21=0, totalPessoasMaisQ50=0;
	   do{
        printf("Informe a idade: ");
		scanf("%d", &idade);
    	if (idade >=0){
    		if(idade < 21){
    			totalPessoasMenosQ21++;
			}
			else if(idade > 50){
				totalPessoasMaisQ50++;
			}
		}
	}while(idade >= 0);
	    printf("Total de pessoas com menos de 21 anos: %d\n", totalPessoasMenosQ21);
	    printf("Total de pessoas com mais de 50 anos: %d\n",totalPessoasMaisQ50);
	return 0;
	}
	

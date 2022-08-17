#include <stdio.h>
#include <locale.h>


int main(){
	
	char name[20];
	
	printf("Digite um nome: ");
	scanf("%s", &name);
	
	switch(name[20]){
	
	case 'lucas':
		printf ("O nome que voce digitou é %s", name);
		break;
	case 'diogo':
		printf("O nome que voce digitou é %s", name);
        break;
	default:
    	printf("INVALIDO");
	}
    		
}

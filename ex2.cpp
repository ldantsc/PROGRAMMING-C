#include <stdio.h>
#include <locale.h>

int main(){
	
 setlocale(LC_ALL , "portuguese");
	
	float valCompra, taxa, desconto, totPagar;
    
	printf("Informe o valor da compra:\n");
	scanf("%f", &valCompra);	
    
if(valCompra <= 2000){
    taxa = 0.1;
	} 
else {
 if(valCompra >= 3000){
     taxa = 0.05;
	} 
 else {
   if(valCompra <= 5000){
       taxa = 0.03;
	} 
   else {
         taxa = 0.2;
    }
  }
}
	desconto = valCompra*taxa;
	totPagar = valCompra-desconto;
	
	printf("O seu desconto é de: %.3f \n Valor total da compra: %.3f", desconto, totPagar);
	
	
}

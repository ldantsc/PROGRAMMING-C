#include <stdio.h>
#include <math.h>

int main(){
	

	int num[4], i;
	float result[4];
	
	for(i = 0; i < 4; i++){
	printf("\n\nDigite um valor:");
	scanf("%d", &num[i]);
}

for(i = 0; i < 4; i++){
  result[i] = sqrt(num[i]);
}

    for(i = 0; i < 4; i++){
	   printf("\n\n%d Raiz quadrada de %d e: %.3f", i, num[i], result[i]);
   	
}
}

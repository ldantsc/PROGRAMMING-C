#include <stdio.h>

int main(){
	
	int matC[3][3], i, j;
	int matA[3][3] = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}}; 
	int matB[3][3] = {{5, 35, 70}, {1, 25, 30}, {1, 4, 7}};
	
for (i=0; i<3; i++){
	for (j=0; j<3; j++)
	{
     if(matA[i][j]>matB[i][j])
     { 
	 matC[i][j] = matA [i][j];
}
	else
	{
	 matC[i][j] = matB[i][j];
   }
  }
 }
printf("\n");
for (i=0; i<3; i++){
	for (j=0; j<3; j++){
		printf("%d ", matC[i][j]);
	}
printf("\n");
   }
  }

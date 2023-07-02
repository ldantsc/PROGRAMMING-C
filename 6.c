#include <stdio.h>

int main(){
	
int mat[66][66], i, j;
	
for(i = 0; i < 66; i++)
{
 for(j = 0; j < 66; j++){
   mat[i][j] = 98*2;  
     printf(" %d ", mat[i][j]);
	}
}
}

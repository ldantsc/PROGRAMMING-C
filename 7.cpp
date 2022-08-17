#include <stdio.h>

int main(){

int i, j;	
int mat[3][3] = {{4, -2, 3},{7, -1, -4},{-10, 4, -2}};

for(i = 0; i < 3; i++)
{
	for(j = 0; j < 3; j++)
	{
		if(mat[i][j]< 0)
		{
        mat[i][j] = mat[i][j] * -1;
		}
	}
}
for(i = 0; i < 3; i++)
{
	for(j = 0; j < 3; j++)
	{
		printf("%d ", mat[i][j]);
  }
  printf("\n");
}

	
}



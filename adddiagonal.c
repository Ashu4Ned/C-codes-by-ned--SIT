#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int r, c, i, j, sum = 0;
	printf("Enter number of rows and column of matrix\n");
	scanf("%d%d", &r, &c);
	if(r != c)
	{
		printf("this is not a square matrix so diagonal elements cannot be found\n");
		exit(0);
	}	
	int matrix1[r][c];
	printf("Enter the elements of matrix\n");
	for(i =0; i<r; i++)
	{
		for(j = 0; j < c; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}	
	}
	
	// Displaying matrix1
	printf("The matrix value entered is\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d  ", matrix1[i][j]);
		}	
		printf("\n");
	}	
	for(i = 0; i < r; i++)
	{
		sum = sum + matrix1[i][i];
	}	
	printf("\nThe sum of diagonal elements is = %d\n", sum);

	return 0;
}	

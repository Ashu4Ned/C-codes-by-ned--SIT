#include<stdio.h>
int main()
{	
	int r, c, i, j;
	printf("Enter number of rows and column of matrix\n");
	scanf("%d%d", &r, &c);
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
	printf("\n");
	return 0;
}	

#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int r1, c1, r2, c2, i, j;
	printf("Enter number of rows and column of matrix 1\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter the number of rows and column of matrix 2\n");
	scanf("%d%d", &r2, &c2);
	if(r1 != r2 || c1 != c2)
	{
		printf("addition is not possible\n");
		exit(0);
	}
	else
	{
		int matrix1[r1][c1], matrix2[r1][c1], matrix3[r1][c1];
		printf("Enter the elements of matrix1\n");
		for(i =0; i<r1; i++)
		{
			for(j = 0; j < c1; j++)
			{
				scanf("%d", &matrix1[i][j]);
			}	
		}
		
		printf("Enter the elements of matrix2\n");
		for(i = 0; i < r1; i++)
		{
			for(j = 0; j < c1; j++)
				scanf("%d", &matrix2[i][j]);
		}	

	// Displaying matrix1
		for(i = 0; i < r1; i++)
		{
			for(j = 0; j < c1; j++)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}	
		}
		printf("The value of matrix1 \n");
		for(i = 0; i<r1; i++)
		{
			for(j = 0; j < c1; j++)
			{
				printf("%d  ", matrix1[i][j]);
			}
			printf("\n");
		}
			
		return 0;
		printf("the value of matrix2\n");
		for(i = 0; i < r1; i++)
		{
			for(j = 0; j < c1; j++)
			{
				printf("%d  ", matrix2[i][j]);
			}
			printf("\n");
		}	

		printf("\nThe sum of above matrices is \n");
		for(i = 0; i < r1; i++)
		{
			for(j = 0; j < c1; j++)
			{
				printf("%d  ", matrix3[i][j]);
			}
			printf("\n");
		}	
	}	
}

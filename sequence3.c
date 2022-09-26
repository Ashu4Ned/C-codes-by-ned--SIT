#include<stdio.h>
int main()
{
	int i, n;
	printf("enter the value of n\n");
	scanf("%d", &n);
	for (i = 2; i<= n; i++)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");	
	return 0;
}	

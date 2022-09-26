#include<stdio.h>
int main()
{
	int i, a, b;
	int sum = 0;
	printf("Enter 2 numbers to multiply\n");
	scanf("%d%d", &a, &b);
	for (i = 1; i<=b; i++)
	{
		sum = sum + a;
	}	 
	printf("multiplication of %d and %d is %d\n", a, b, sum);
	return 0;
}	

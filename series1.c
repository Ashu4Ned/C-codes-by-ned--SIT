#include<stdio.h>
int main()
{
	int i, n, sum;
	sum = 0;
	printf("enter the value of n\n");
	scanf("%d", &n);
	for (i = 2; i<= n; i++)
		sum += i;
	printf("sum of series is %d\n", sum);	
	return 0;
}	

#include<stdio.h>
int main()
{
	int i, n;
	float sum = 0;
	printf("enter the value of n\n");
	scanf("%d", &n);
	for (i = 2; i<= n; i++)
		sum += ((float)i/(i*i));
	printf("sum of series is %f\n", sum);	
	return 0;
}	

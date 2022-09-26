#include<stdio.h>
int main()
{
	int mark[10], i, sum;
	float avg;
	printf("Enter 10 elements ");
	for(i =0; i<10; i++)
		scanf("%d", &mark[i]);
	sum = 0;
	for(i = 0; i < 10; i++)
		sum = sum + mark[i];
	avg = sum/10.0;
	printf("The entered elements are\n");
	for(i = 0; i<10; i++)
		printf("%d ", mark[i]);
	printf("\n sum = %d, average = %f\n", sum, avg);
	return 0;
}	

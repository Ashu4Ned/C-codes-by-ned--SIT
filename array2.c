#include<stdio.h>
int main()
{
	int mark[5], i;
	printf("Enter 5 elements ");
	for(i =0; i<5; i++)
		scanf("%d", &mark[i]);
	printf("The entered elements are\n");
	for(i = 0; i < 5; i++)
		printf("%d ", mark[i]);
	printf("\n");
	return 0;
}	

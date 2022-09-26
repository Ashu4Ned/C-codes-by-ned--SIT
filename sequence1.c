#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	for(i = 2; i <= n; i++)
		printf("%d", i);
	return 0;
}	

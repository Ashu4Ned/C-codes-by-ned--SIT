#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value\n");
	scanf("%d", &n);
	if(n >= 0)
	{
		if(n > 0)
			printf("%d is positive\n", n);
		else
		  	printf("%d is 0\n", n);
	}
	else
		printf("%d is negative\n", n);	
	return 0;
}	

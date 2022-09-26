#include<stdio.h>
int main()
{
	int n;
	printf("enter the no\n");
	scanf("%d", &n);
	if(n % 3 == 0 && n % 2 != 0)
		printf("%d is divisible by 3 but not by 2\n");
	printf("Thank you!\n");
	return 0;

}	

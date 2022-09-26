#include<stdio.h>
int main()
	
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("a=%d is even number",a);
	}
	if(a%2!=0)
	{
		printf("a=%d is odd number",a);
	}
	else
		printf("thank you");
	return 0;
}


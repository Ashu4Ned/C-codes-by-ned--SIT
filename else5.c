#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
	{
		printf("a=%d is greater",a);
	}
	else if(b>c)
	{
		printf("b=%d is greater",b);
	}
	else if(a>c)
	{
		printf("a=%d is greater",a);
	}
	else
	
		printf("c=%d is greater",c);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=10;
	printf("value of a b %d%d",a,b);
	a=(a+b);
	b=(a-b);
	a=(a-b);
	printf("swap value of a b %d%d",a,b);
	return 0;
}

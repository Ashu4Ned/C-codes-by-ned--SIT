#include<stdio.h>

int main()
{
	int a, b, c;
	a= 7;
	b= 9;
	printf("a = %d and b = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("a= %d and b= %d\n", a, b);
	return 0;

}

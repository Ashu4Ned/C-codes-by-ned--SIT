#include<stdio.h>
int main()
{
	int a, b, c, d;
	float r;
	printf("Enter 4 numbers for operation\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(c - d != 0)
	{
		r = (a + b)/(c -d);
		printf("result is %f\n", r);
	}
	printf("Thanks!");
	return 0;
}	

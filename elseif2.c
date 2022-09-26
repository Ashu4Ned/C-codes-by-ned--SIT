#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter three values\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{	
		if(a > c)
			printf("%d is the grestest\n", a);
	}
	else if(b > c)
		printf("%d is the grestest\n", b);
	else
		printf("%d is the greatest\n",c);
	return 0;
}	

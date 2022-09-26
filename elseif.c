#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 values to check greatest\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a > b && a>c)
		printf("%d is the greatest\n", a);
	else if(b > c)
		printf("%d is the grestest \n", b);
	else
		printf("%d is the greatest\n", c);
	return 0;
}	

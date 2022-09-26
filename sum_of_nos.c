#include<stdio.h>
int main()
{
//finding sum of nos from 1 to 1000 using formula
	int n;
	int sum;
	printf("Enter the number upto which u want the sum of\n");
	scanf("%d", &n);
	sum  = (n*(n+1))/2;
	printf("Sum of natural nos. upto n%d is %d\n",n,sum);
	return 0;
}

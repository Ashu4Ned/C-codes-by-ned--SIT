#include<stdio.h>
int main()
{
	int n, d1, d2, d3, temp;
	printf("Enter a three digit number\n");
	scanf("%d", &n);
	d3 = n % 10;
	temp = n / 10;
	d2 = temp % 10;
	d1 = temp / 10;
	if(d1 == d3)
	{
		printf("%d is a palindrome\n", n);
	}
	else
	{
		printf("%d is not a palindrome\n", n);
	}	
	return 0;
}	

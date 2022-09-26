#include<stdio.h>
int main()
{
	int num, temp, digit;
	int sum = 0;
	printf("Enter a number");
	scanf("%d", &num);
	temp = num;
	while(num > 0)
	{
		digit = temp % 10;
		sum = sum + digit;
		temp = temp/10;
	}
	printf("The sum of digits in %d is %d\n", num, sum);
	return 0;
}	

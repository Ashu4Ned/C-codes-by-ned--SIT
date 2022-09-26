#include<stdio.h>
int main()
{
	int num, temp, digit, rev;
	rev = 0;
	printf("Enter a number\n");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		digit = num % 10;
		rev = ((rev * 10) + digit);
		num = num / 10;
	}
	if(rev == temp)
		printf("This number %d is a palindrome as reverse is also %d\n", temp, rev);
	else
		printf("This number %d is not a palindrome as reverse is %d\n", temp, rev);
	return 0;
}	

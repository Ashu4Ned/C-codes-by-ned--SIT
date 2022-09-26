#include<stdio.h>
int main()
{
	int i, l, u, num, temp, digit;
	int sum = 0;
	printf("Enter a range to get addition of digits of all nos.\n");
	scanf("%d %d", &l, &u);
	for (i = l; i <= u; i++)
	{	
		num = i;
		temp = num;
		sum = 0;
		while(num > 0)
		{
			digit = num % 10;
			sum = sum + digit;
			num = num/10;
		}
		printf("\nThe sum of digits in %d is %d\n", temp, sum);
	}
	return 0;
}	

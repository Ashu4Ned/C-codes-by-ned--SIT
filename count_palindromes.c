#include<stdio.h>
int main()
{
	int count, i, l, u, num, temp, digit, rev;
	printf("Enter a range\n");
	scanf("%d %d", &l, &u);
	count = 0;
	for(i = l; i <= u; i++)
	{	num = i;
		temp = num;
		rev = 0;
		while(num != 0)
		{
			digit = num % 10;
			rev = ((rev * 10) + digit);
			num = num / 10;
		}
		if(rev == temp)
			count = count+1;
	}
	printf("There are %d palindromes in range %d - %d\n", count, l, u);
	return 0;
}	

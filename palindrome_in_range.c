#include<stdio.h>
int main()
{
	int i, l, u, num, temp, digit, rev;
	rev = 0;
	printf("Enter a range\n");
	scanf("%d %d", &l, &u);
	printf("Palindromes in range %d - %d are\n", l, u);
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
			printf(" %d  ", rev);
	}
	printf("\n");
	return 0;
}	

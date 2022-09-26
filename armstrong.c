#include<stdio.h>
#include<math.h>
int main()
{
	int n, d1, d2, d3, temp, result;
	printf("Enter a three digit number\n");
	scanf("%d", &n);
	d3 = n % 10;
	temp = n / 10;
	d2 = temp % 10;
	d1 = temp / 10;
	re = (pow(d1, 3) + pow(d2, 3) +pow(d3, 3));
	if(re == n)
	{
		printf("%d is an armstrong number\n", n);
	}
	else
	{
		printf("%d is not an armstrong number\n", n);
	}	
	return 0;
}	

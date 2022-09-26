#include<stdio.h>
#include<math.h>
int main()
{
	int num, sum, temp, digit, digit2, count;
	printf("Enter a number to test armstrong number \n");
	scanf("%d", &num);
	count = 0;
	sum = 0;
	temp = num;
	int num2 = num;
	while(num != 0)
	{
		digit = num % 10;
		num = num/10;
		count = count+1;
	}	
	while(num != 0)
	{
		digit2 = temp % 10;
		sum = sum+ pow(digit2, count);
		temp = temp/10;		
	}
	if(sum == num2)
		printf("%d is an armstrong number", num2);
	else
		printf("%d is not an armstrong number\n", num2);
	return 0;
}	

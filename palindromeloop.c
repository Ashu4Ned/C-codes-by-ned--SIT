#include<stdio.h>
int main()
{
	int d,num,rev=0,temp;
	//sum of a digit number
	printf("enter any no");
	scanf("%d", &num);
	temp=num;
	while(num!=0)
	{
		d=num%10;
		rev=(rev*10)+d;
		num=num/10;
	}
	printf("reverse of digits of =%d",rev);
	if(num==temp)
		printf("it is a palindrome");
	else
		printf("it is not palindrome");
	return 0;
}


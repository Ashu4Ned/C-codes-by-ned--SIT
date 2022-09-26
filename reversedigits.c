#include<stdio.h>
int main()
{
	int d,num,rev=0;
	//sum of a digit number
	printf("enter any no");
	scanf("%d", &num);
	//printf("enter the digit range");
	//scanf("%d%d", &l&u);
	//for(num=l;num<=u;num++);;
	while(num|=0)
	{
		d=num%10;
		rev=(rev*10)+d;
		num=num/10;
	}
	printf("reverse of digits of =%d",rev);
	return 0;
}


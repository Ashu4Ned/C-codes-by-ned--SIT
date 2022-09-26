#include<stdio.h>
int main()
{
	int d,num,sum,l,u;
	//sum of a digit number
	printf("enter any no");
	scanf("%d", &num);
	//printf("enter the digit range");
	//scanf("%d%d", &l&u);
	//for(num=l;num<=u;num++);;
	while(num>0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("sum of digits of =%d",sum);
	return 0;
}


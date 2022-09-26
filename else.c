#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("enter the first value");
	scanf("%d",&num1);
	printf("enter the second value");
	scanf("%d",&num2);
        max=(num1>num2)?num1:num2;
	printf("maximum value=%d",max);
        return 0;
}


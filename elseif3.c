#include<stdio.h>
int main()
{
	int may,june,july;
	printf("enter last three recharge bills");
	scanf("%d%d%d", &may,&june,&july);
	if(may>june&&may>july)
	{
		printf("\nmay month bill=%d is ",may);
	}
	else if(june>july)
	{
		printf("\njune month bill=%d is greater",june);
	}
	else 
	{
		printf("\njuly month bill=%d is greater",july);
	}
	return 0;
}

	

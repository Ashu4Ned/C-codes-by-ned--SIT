#include<stdio.h>
int main()
{
	int i,l,u,d,num,rev=0,temp;
	//palindrome range find only
	printf("enter no range");
	scanf("%d%d", &l,&u);
	for(i=l;i<=u;i++)
	{
		num=i;
		temp=num;
		rev=0;
		while(num!=0)
		{
			d=num%10;
			rev=(rev*10)+d;
			num=num/10;
		}
		if(rev==temp)
			printf("%d ",rev);
	
	}
	printf("\n");
	return 0;
}


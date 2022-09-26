#include<stdio.h>
int main()
{
	int i,mark[10];
	printf("enter any ten element no");
	for(i=0;i<10;i++)
		{
			scanf("%d", &mark[i]);
		}
	for(i=9;i>=0;i--)
		{
		printf("%d ",mark[i]);	
		}
	return 0;

}


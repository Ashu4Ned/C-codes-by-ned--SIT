#include<stdio.h>
int main()
{
	int i,mark[10],sum=0;
	float avg;
	printf("\nenter any ten element no");
	for(i=0;i<10;i++)
		{
			scanf("%d", &mark[i]);
		}
	for(i=0;i<10;i++)
		{
			sum=sum+mark[i];
		}
		avg=(sum/10.0);
		printf("\nthe elements are\n");
		for(i=0;i<10;i++)
		{
			printf("%d\t",mark[i]);
		}

		printf("sum=%d\t avg=%f",sum,avg);	
	return 0;

}


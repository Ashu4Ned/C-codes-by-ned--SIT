#include<stdio.h>
int main()
{
	int i,k,j,n;
	printf("\nenter any no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	return 0;

}


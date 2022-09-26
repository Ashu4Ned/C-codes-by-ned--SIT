#include<stdio.h>
int main()
{
	int i,arr[5],n;
	int counte=0,counto=0;
	printf("\nenter any element no");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d",arr[i]);
			counte++;
		}	
		else
		{	
			printf("%d",arr[i]);
			counto++;
		}		
	}	
	printf("total even no=%d\n",counte);
	printf("total odd no=%d\n",counto);
	return 0;
}


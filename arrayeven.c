#include<stdio.h>
int main()
{
	int i,arr[500],n;
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
			printf("even no=%d",arr[i]);
		else
			printf("odd no=%d",arr[i]);
	}			
	return 0;

}


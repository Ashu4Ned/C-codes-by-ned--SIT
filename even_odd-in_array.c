#include<stdio.h>
int main()
{
	int arr[10], i;
	int count1 = 0;
	int count2 = 0;
	printf("Enter 10 elements ");
	for(i =0; i<10; i++)
		scanf("%d", &arr[i]);
	printf("\nEven numbers in array are");
	for(i = 0; i < 10; i++)
	{
		if(arr[i]%2 == 0)
		{	
			printf("%d  ", arr[i]);
			count1++;
		}
	}
	printf("\n There are %d  even numbers\n", count1);
	printf("\nOdd numbers in array are");
	for(i =0; i<10; i++)
	{
		if(arr[i]%2 != 0)
		{
			printf("%d  ", arr[i]);
			count2++;
		}		
	}
	printf("\n there are %d odd numbers\n", count2);
	return 0;
}	

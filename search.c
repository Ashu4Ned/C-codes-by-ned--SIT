#include<stdio.h>
int main()
{
	int arr[10], i, search;
	printf("Enter 10 elements ");
	for(i =0; i<10; i++)
		scanf("%d", &arr[i]);
	printf("Enter the value to search");
	scanf("%d", &search);
	for(i = 0; i < 10; i++)
	{
		if(search == arr[i])
			break;
	}
	if (i == 10)
		printf("Element is not found\n");
	else
		printf("%d is found at %d\n", search, i+1);

	return 0;
}	

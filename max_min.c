#include<stdio.h>
int main()
{
	int arr[10], i, max, min;
	printf("Enter 5 elements ");
	for(i =0; i<10; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	min = arr[0];
	for(i = 0; i < 10; i++)
	{
		if(max < arr[i])
			max = arr[i];
		else if(min > arr[i])
			min = arr[i];
	}
	printf("maximum number in array is %d\n and minimum value is %d\n", max, min);
	return 0;
}	

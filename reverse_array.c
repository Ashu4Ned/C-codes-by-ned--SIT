#include<stdio.h>
int main()
{
	int arr[5], i;
	printf("Enter 5 elements ");
	for(i = 0; i<5; i++)
		scanf("%d", &arr[i]);
	printf("you entered values \n");
	for(i = 0; i < 5;i++)
		printf("%d  ", arr[i]);
	printf("In reverse order it is\n");
	for(i = 4; i >= 0; i--)
		printf("%d  ", arr[i]);
	printf("\nEND\n");
	return 0;
}	

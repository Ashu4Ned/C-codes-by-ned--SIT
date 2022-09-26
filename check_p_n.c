#include<stdio.h>
int main()
{
	int input;
	printf("Enter a number\n");
	scanf("%d", &input);
	input > 0?printf("input value %d is positive\n", input):(input == 0?printf("input %d is 0\n", input):printf("%d is negative\n", input));
	return 0;
}	

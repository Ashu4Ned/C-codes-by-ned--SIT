#include<stdio.h>
int main()
{
	int input1, input2, input3, max;
	printf("enter the three numbers to check maximum\n");
	scanf("%d%d%d", &input1, &input2, &input3);
	max = (input1 > input2?(input1 > input3?input1:input3):(input2 > input3?input2:input3));
	printf("The maximum value is %d\n", max);
	return 0;
}	

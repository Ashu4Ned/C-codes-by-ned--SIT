#include<stdio.h>
int main()
{
	int input1, input2, input3, temp, max;
	printf("enter the three numbers to check maximum\n");
	scanf("%d%d%d", &input1, &input2, &input3);
	temp = (input1 > input2?input1:input2);
	max = (temp > input3?temp:input3);
	printf("The maximum valu is %d\n", max);
	return 0;
}	

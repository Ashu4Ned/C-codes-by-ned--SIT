#include<stdio.h>
int main()
{
	int min, input1, input2;
	printf("enter two nos. to check the minimum value\n");
	scanf("%d%d", &input1, &input2);
	min = (input1 < input2?input1:input2);
	printf("%d is the minimum of the two\n", min);
	return 0;
}	

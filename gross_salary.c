#include<stdio.h>
int main()
{
	int basic;
	float hra, da, gross;
	printf("Enter your basic salary\n");
	scanf("%d", &basic);
	if(basic < 1500)
	{
		hra = 0.10 * basic;
		da = 0.90 * basic;
	}	
	else
	{
		hra = 500;
		da = 0.98 * basic;
	}
	gross = basic + hra + da;
	printf("Your basic salry is %d \nhra is %f\n da is %f\nand gross salary is %f\n", basic, hra, da, gross);
	return 0;
}	

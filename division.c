#include<stdio.h>
int main()
{
	int marks;
        float percent;
	printf("Enter your total marks \n");
	scanf("%d", &marks);
	percent = marks/5;
	printf("You have %f percentage\n", percent);
	if(percent >= 50.0)
	{
		if(percent >= 60.0)
			printf("Congrats! first division\n");
		else
			printf("Congrats! second division\n");
	}
	else
	{
		if(percent >= 40.0)
			printf("Congrats! third division\n");
		else
			printf("Sorry! you are fail\n");
	}	
	return 0;
}	

#include<stdio.h>
int main()
{
	int a, b, choice;
	int stop;
	do
	{
	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	printf("    xxx MENU xxx\nEnter the index as per choice\n 1. addition \n 2. subtraction \n 3. multiplication \n 4. division \n");
	scanf("%d", &choice);	
	switch(choice)
		{	
			case 1:
		
				printf("result is %d\n", a+b);
				break;
	
			case 2:
		
				printf("The result is %d\n", a-b);
				break;
		
			case 3:
		
				printf("The result is %d\n", a*b);
				break;
			
			case 4:
		
				printf("The result is %d\n", a/b);
				break;
			
			default:
				printf("Enter valid option\n");
		}
	}while(stop == 1)
	printf("Enter 0 to stop and 1 to continue");
	scanf("%d", &stop);
	}
 	printf("Thank you.\n");
	
	return 0;
}	

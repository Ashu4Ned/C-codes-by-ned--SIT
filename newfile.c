#include<stdio.h>
int main()
{
	int a; char c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("\nEnter c: ");
	//you may use fflush(stdin);
	scanf(" %c", &c);
	printf("\n a = %d , c = %c", a, c);
	return 0;
}	

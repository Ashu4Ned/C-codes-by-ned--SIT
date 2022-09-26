#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter a number to get fibonacci series upto that term\n");
	scanf("%d", &n);
	int t1 = 0;
	int t2 = 1;
	printf("%d  %d  ", t1, t2);
	int t3 = t1 + t2;
	for (i = 3; i <= n; i++)
	{
		printf("%d  ",t3);
		t1 = t2;
		t2 = t3;
		t3 = t2 + t2;
	}
	printf("\n");	
	return 0;
}	

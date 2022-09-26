#include<stdio.h>
int main()
{
	int a,b,c;
	float x1,x2;
	printf("value of quadratic eqation of a b c");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4ac))/2a;
	x2=(-b-sqrt(b*b-4ac))/2a;
	printf("value of x1 %f",x1);
	printf("value of x2 %f",x2);
 	return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
	float area, a, b, c, s;
	printf("Enter the values of all sides respectively\n");
	scanf("%f%f%f",&a,&b,&c);
	s = (a+b+c)/2;
	area =sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is %f\n", area);
	return 0;
}

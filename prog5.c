#include<stdio.h>
#include<math.h>

int main(){

	// to find the roots of quadratic equation
	int a, b, c;
	float x1, x2; 
	printf("Enter the values of a, b and c of quadraTIC equation\n");
	scanf("%d%d%d", &a, &b, &c);
	x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 = (-b-sqrt(pow(b, 2)-4*a*c))/(2*a);
	printf("Your root of the quadratic equation is %f and %f \n", x1, x2);
	return 0;
}

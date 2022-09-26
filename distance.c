#include<stdio.h>
#include<math.h>
int main()
{
	int x1, y1, x2, y2;
	float distance;
	printf("Enter the co ordinates of point 1\n");
	scanf("%d%d", &x1, &y1);
	printf("Enter the coordinates of point 2\n");
	scanf("%d%d", &x2, &y2);
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	printf("The distance between 2 points is %f unit \n", distance);
	return 0;
}	

#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float dist;
	printf("enter the first point");
	scanf("%d%d", &x1,&x2);
	printf("enter the second point");
	scanf("%d%d", &y1,&y2);
	dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("value of distance=%f",dist);
return 0;
}

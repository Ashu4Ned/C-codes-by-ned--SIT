#include<stdio.h>
#include<math.h>
int main(){
	int num;
	float d1,d2,d3,temp;
	printf("enter any 3 digit number");
	scanf("%d", &num);
	d1=num%10;
	d2=(num/10)%10;
	d3=(num/10)/10;
	temp=pow(d1,3)+pow(d2,3)+pow(d3,3);
	if(num==temp)
	{
             printf("this is a armstrong number");
	}
	else
	{
	     printf("this is not a armstrong");
	}
	return 0;
}



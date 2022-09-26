#include<stdio.h>
int main()
{
	int basic;
	float da,hra,gross;
	printf("enter the basic salary");
	scanf("%d", &basic);
	if(basic<1500)
	{
	hra=0.1*1500;
	da=0.9*1500;

		\nprintf("hra=%f(0.1)*basic",hra);
		\nprintf("da=%f(0.9)*basic",da);
	}
	else
	{
	hra=500*basic;
	da=0.98*basic;
	
		\nprintf("hra=%f(500)*basic",hra);
		\nprintf("da=%f(0.98)*basic",da);
	}
	gross=basic+hra+da;
	\nprintf("gross salary is%f=%d+%f+%f",gross,basic,hra,da);
	
	return 0;
}


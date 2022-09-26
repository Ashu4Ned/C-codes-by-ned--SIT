#include<stdio.h>
int main(){
	int a,b,c;
	a=2;
	b=3;
	printf("value of%d%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("swap value of %d%d",a,b);
	return 0;
}

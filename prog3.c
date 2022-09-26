#include<stdio.h>
int main()
// to chang the value from inch  to cm 
{
	float inch;
	float cm;
	printf("Enter the value in inch\n");
	scanf("%f", &inch);
	cm = 2.54f * inch ;
	printf("%f inch = %f cm\n", inch, cm);
	return 0;

}

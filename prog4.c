// to change farenheit to celcius
#include<stdio.h>
int main()
{
	float farenheit;
	float celcius;
	printf("Enter the temperature in farenheit\n");
	scanf("%f", &farenheit);
	celcius = (farenheit - 32) *(5.0/9);
	printf("Temp %f in farenheit = %f centigrade\n",farenheit,celcius);
	return 0;
}

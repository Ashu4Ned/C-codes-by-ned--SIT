#include<stdio.h>
int main()
{
     int num1,num2,num3,max,max2;
     printf("enter the first value");
     scanf("%d", &num1);
     printf("enter the second value");
     scanf("%d", &num2);
     printf("enter the third number");
     scanf("%d", &num3);
     max=(num1>num2?num1:num2);
     printf("maximum between two number is=%d",max);
     max2=(max>num3?max:num3);
     printf("maximum between three number is=%d",max2);
     return 0;                                     
}
                             

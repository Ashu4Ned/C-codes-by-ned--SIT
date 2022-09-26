/*  pseudo code
The sum of this sries (1/1!)+(2/2!)+(3/3!)+(4/4!)+.....+(i/i!)+....+(n/n!)
 for i = 1 to n
 sum = sum(i/i!)
*/
#include<stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return(n * factorial(n-1));
}

int main(int argc, char const *argv[])
{
    int i, n, f;
    float sum = 0;
    printf("Enter the number for terms upto you want the sum: ");
    scanf("%d", &n);
    for ( i = n; i >= 1; i--)
    {
        sum = sum + (((float) i)/(factorial(i)));
    }
    printf("Sum of the given series is %f\n", sum);
    return 0;
}

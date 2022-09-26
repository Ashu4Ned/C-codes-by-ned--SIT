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
    int n, f;
    printf("Enter the number for factorial: ");
    scanf("%d", &n);
    f = factorial(n);
    printf("%d! = %d\n",n,f);
    return 0;
}

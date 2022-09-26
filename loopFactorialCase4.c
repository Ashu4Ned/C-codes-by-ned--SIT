#include<stdio.h>
// with parameter and with return type
int factorial(int n)
{
    int i, f = 1;
    if (n == 0 || n == 1)
    {
        f = 1;   
    }
    else
     {
        for (i = n; i >= 1; i--)
        {
            f = f * i;
        }
    }   
    return f;
}

int main(int argc, char const *argv[])
{ 
    int n, k;  
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);
    k = factorial(n);
    printf("%d! = %d", n, k);
    return 0;
}
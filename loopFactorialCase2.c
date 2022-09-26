#include<stdio.h>
// with parameter and without return type
void factorial(int n)
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
    printf("%d! = %d\n", n, f);
}

int main(int argc, char const *argv[])
{ 
    int n;  
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
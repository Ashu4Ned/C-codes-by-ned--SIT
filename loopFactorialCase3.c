#include<stdio.h>
// without parameter and with return type
int factorial()
{
    int i, n, f = 1;
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);
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
    int k = factorial();
    printf("The factorial is %d\n", k);
    return 0;
}
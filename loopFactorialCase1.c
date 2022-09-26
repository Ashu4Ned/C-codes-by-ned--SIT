#include<stdio.h>
// without parameter and without return type
void factorial()
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
    printf("%d! = %d\n", n, f);
}

int main(int argc, char const *argv[])
{
    factorial();
    return 0;
}
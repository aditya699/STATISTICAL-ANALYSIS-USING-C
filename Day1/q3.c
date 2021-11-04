// RECURSIVE FUNCTION (FACTORIAL)
#include <stdio.h>
int fact(int n);
int main()
{
    int n,a;
    printf("enter the number whose factorial you want : ");
    scanf("%d",&n);
    a=fact(n);
    printf("The factorial of %d is %d",n,a);
}

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
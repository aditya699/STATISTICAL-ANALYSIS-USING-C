// Lets us write a program to find factorial of a given number, also check whether it is prime or not and it's fiboncacci series of a using functions in C Programming language

#include<stdio.h>
int fact(int a);
int fib(int a);
int prime(int a);
int main()
{
    int n ,a,b,c;
    printf("Enter the number you want : \n");
    scanf("%d",&n);
    a=fact(n);
    b=fib(n);
    c=prime(n);

    return 0;

}
int fact(int n) 
{

    int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d\n",n,fact);
}
int fib(int n)
{
    int a=0 , b=1,c;
    for (int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    printf("\n");

}
int prime (int n)
{
    int f=0;
    for (int i=2 ; i <f;i++)
    {
        if (n % i==0) 
        {
            f=1;
            break;

        }
    }
    if (f==0) 
    {
        printf("%d is prime\n",n);
    }
    else
    {
        printf("%d is not prime\n",n);
    }

}
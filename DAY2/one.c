// QUICK REVISION ABOUT FUNCTIONS
// PROGRAM TO MULTIPLY TWO NUMBERS
#include <stdio.h>

int mult(int a ,int b);
int main()
{
    int a , b , c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    c=mult(a,b);
    printf("The result of multiplications of %d and %d is %d",a,b,c);
    
}

int mult(int a , int b)
{
    int p;
    p=a*b;
    return p;
}

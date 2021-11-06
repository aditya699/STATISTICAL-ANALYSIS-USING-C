#include<stdio.h>

int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    printf("The value of a is %d", a);
    printf("\nThe value of a is %d", *ptr);
    printf("\nThe address of a is %x",ptr);
    printf("\nThe address of a is %x",&a);
}
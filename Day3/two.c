#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    printf("%x",ptr);
    printf("\n %x",ptr+1);
    printf("\n %x",ptr-1);
}
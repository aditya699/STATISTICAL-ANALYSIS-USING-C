#include<stdio.h>
#include"five.c"
int main()
{
    extern  int i;
    printf("%d",i);
}
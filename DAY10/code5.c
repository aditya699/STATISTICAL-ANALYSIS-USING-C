#include<stdio.h>

int main()
{
    int num[26]={23,3,5,7,4,-1,6};
    int *n=num,i=2,j=4;
    printf("%d\n",*(num + *(num+1)));

}
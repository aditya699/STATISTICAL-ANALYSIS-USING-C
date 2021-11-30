#include<stdio.h>

void swap(int *a,int *b);

int main()
{
    int x,y;
    printf("enter two numbers : \n");
    printf("enter number 1: \n");
    scanf("%d",&x);
    printf("enter number 2: \n");
    scanf("%d",&y);
    printf("The values of x and y before swaping is : %d and %d\n",x,y);
    swap(&x,&y);
    printf("The values of x and y after swaping is : %d and %d\n",x,y);
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    // printf("The values of x and y after swaping is %d and %d ",a,b);
}


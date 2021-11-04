// MULTIPLICATION TABLE PROGRAM
#include<stdio.h>
int mult(int n);
int main()
{
    int n;
    printf("Enter the number of which u want multiplication table of: ");
    scanf("%d",&n);
    mult(n);
}
int mult(int n)
{
    for (int i=1 ;i <=10 ;i++)
    {
        printf("%d * %d is %d ",n,i,n*i);
        printf("\n");
    }
}
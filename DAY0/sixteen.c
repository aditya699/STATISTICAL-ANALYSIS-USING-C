#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void tablemaker(FILE *,char ch);
long int fact(int n);

int main()
{
    FILE *ptr;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/16_out.txt","w");
    int i , n =12 ,ncr ,r ;
    fprintf(ptr,"SNO | N| R |N! |R! |NCR\n");
    tablemaker(ptr,'-');
    for(i=1;i<=n;i++)
    {
        ncr=fact(n)/(fact(i)*fact(n-i));
        fprintf(ptr,"%d|%d|%d|%d|%d|%d|\n",i,n,i,fact(n),fact(i),ncr);
    }
    tablemaker(ptr,'-');
}

long int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}

void tablemaker(FILE *ptr,char ch)
{
    int i;
    for(i=0;i<=20;i++)
        fprintf(ptr,"%c",ch);
    fprintf(ptr,"\n");  
}
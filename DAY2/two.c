#include<stdio.h>
long int fact(FILE *,int n);
void tablemaker(FILE *, char a);
int main()
{
    FILE * ptr;
    ptr=fopen("Output.txt","w");
    int n,r,ncr;
    printf("Enter the number: ");
    scanf("%d",&n);
    tablemaker(ptr,'-');
    fprintf(ptr,"|SNO.|n  |r   |n! |r!  |ncr"  );
    for (int r = 1; r <= 12; r++)
    {
        ncr=fact(ptr,n)/(fact(ptr,r)*fact(ptr,n-r));
        fprintf(ptr,"\n|%d|%d|%d|%d|%d|%d",r,n,r,fact(ptr,n),fact(ptr,r),ncr);
    }
    fprintf(ptr,"\n");
    tablemaker(ptr,'-');  
}
long int fact(FILE *ptr,int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(ptr,n-1);
    }
}

void tablemaker(FILE *ptr, char a)
{
    for (int i = 0; i < 28; i++)
    {
        fprintf(ptr,"%c",a);
    }
    fprintf(ptr,"\n");
}


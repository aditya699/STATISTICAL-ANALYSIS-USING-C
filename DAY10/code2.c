#include<stdio.h>
long int fact(int n);

int main()
{
    FILE *f;
    f=fopen("result.txt","w");
    int n=8,ncr;
    fprintf(f,"--------------\n");
    fprintf(f,"n||r||ncr\n");
    for (int r= 0 ; r < 9;r++)
    {
        ncr=fact(n)/((fact (r))* (fact(n-r)));
        fprintf(f,"%d||%d||%d\n",n,r,ncr);
    }
    fprintf(f,"--------------\n");
}


long int fact (int n)
{
    // int result;
    for(int i=1;i <=n;i++)
    {
        if (n==0 || n==1)
        {
            return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }
    
}
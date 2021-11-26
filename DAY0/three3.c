#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i ,j,flag;
    for(i=2;i<=200;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i % j == 0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }
}
// Write a C- code to print
// (ii) First N prime numbers. (N=20).
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i ,j,flag,sum=0;
    for(i=2;i<=100;i++)
    {
        
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i % j == 0)
            {
                flag=0;
                break;
                
            }
           
        }
        if(flag==1 )
        {
            sum=sum+1;
            if(sum< 21)
            {
                printf("%d -%d\n",i,sum);
            }
    
        }
    }
}
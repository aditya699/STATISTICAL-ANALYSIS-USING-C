#include<stdio.h>
#include<math.h>
float std(float x[],int n)
{
    float sum=0,mean,std;
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        sum=sum+(x[i]-mean)*(x[i]-mean);
    }   
    std=sqrt(sum/(n));
    return std;                        

}
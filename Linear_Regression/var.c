#include<stdio.h>
float var(float arr[],int n) 
{
    int i;
    float sum=0,mean,var;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        var=var+(arr[i]-mean)*(arr[i]-mean);
    }
    var=var/n;
    return var;
}
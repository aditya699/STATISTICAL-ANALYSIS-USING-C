#include<stdio.h>
float cov(float arr1[],float arr2[],int n)
{
    int i;
    float sum1=0,sum2=0,sum3=0;
    for(i=0;i<n;i++)
    {
        sum1=sum1+arr1[i];
        sum2=sum2+arr2[i];
    }
    float mean1=sum1/n; 
    float mean2=sum2/n;             
    for(i=0;i<n;i++)
    {
        sum3=sum3+(arr1[i]-mean1)*(arr2[i]-mean2);
    }                                                       

    return sum3/n;      

}
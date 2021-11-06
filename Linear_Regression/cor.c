#include<stdio.h>
#include<math.h>
float cor(float x[],float y[],int n)
{
    int i;
    float sumx=0,sumy=0,sumx2=0,sumy2=0,sumxy=0;
    for(i=0;i<n;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumx2+=x[i]*x[i];
        sumy2+=y[i]*y[i];       
        sumxy+=x[i]*y[i];
    }
    return (sumxy-sumx*sumy/n)/(sqrt(sumx2-sumx*sumx/n)*sqrt(sumy2-sumy*sumy/n));   
}
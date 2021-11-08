#include<stdio.h>
#include <stdlib.h>
#include <math.h>
// #include"mean.c"
// #include"var.c"
// #include"cov.c"
// #include"cor.c"
// #include"std.c"
 float mean(float arr[],int n);
 float var(float arr[],int n);
 float cov(float x[],float y[],int n);
 float cor(float x[],float y[],int n);
 float std(float x[],int n);
int main()
{
    float mean_x,mean_y,var_x,var_y,cov_xy,cor_xy,std_x,std_y,m1,m2;
    FILE *ptr,*ptr1;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/Linear_Regression/inputY.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/Linear_Regression/inputX.txt","r");
    float arrx[10],arry[10],n;
    printf("Enter the number of elements in the array\n");
    scanf("%f",&n);
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr,"%f",&arrx[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr1,"%f",&arry[i]);
    }    
    printf("The mean of the array x  is %f\n",mean(arrx,n));
    printf("The mean of the array y  is %f\n",mean(arry,n));
    printf("The variance of the array x  is %f\n",var(arrx,n));
    printf("The variance of the array y  is %f\n",var(arry,n));
    printf("The standard deviation of the array x is %f\n",std(arrx,n));
    printf("The standard deviation of the array y is %f\n",std(arry,n));
    printf("The covariance of the array x and y  is %f\n",cov(arrx,arry,n));
    printf("The correlation of the array x and y  is %f\n",cor(arrx,arry,n));
    mean_x=mean(arrx,n);
    mean_y=mean(arry,n);
    cor_xy=cor(arrx,arry,n);
    std_x=std(arrx,n);
    std_y=std(arry,n);
    m1=cor_xy*(std_y/std_x);
    m2=(-cor_xy*(std_y/std_x))+mean_y;
    printf("The slope of the line is %f\n",m1);
    printf("The intercept of the line is %f\n",m2);
    printf("The equation of the line is y=%f*x+%f\n",m1,m2);

}
float mean (float arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum / n;
}
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
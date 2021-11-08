#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float average(float x[],int n);
float variance(float x[],int n);
void read(float arr[],FILE *f,int n);
int main()
{
   int n1,n2;
    FILE *ptr,*ptr1;
    float x[40],y[40],a,b,F_cal,F_tab;
    printf("enter the number of observations in x : ");
    scanf("%d",&n1);
    printf("enter the number of observations in y : ");
    scanf("%d",&n2);
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_a.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_b.txt","r");
    read(x,ptr,n1);
    read(y,ptr1,n2);
    average(x,n1);
    average(y,n2);
    a=variance(x,n1);
    printf("The variance of the  sample 1  is: %f\n",a);
    b=variance(y,n2);
    printf("The variance of the sample 2 is: %f\n",b);
    if(a>b) 
    {
    F_cal=a/b;
    }
    else
    {
    F_cal=b/a;
    }
    printf("The calculated value of F statistic is %.4f\n",F_cal);
    printf("Enter the tabulated value of the F statistic at %d and %d degrees of freedom: ",n1-1,n2-1);
    scanf("%f",&F_tab);
    if(F_cal>F_tab)
    {
        printf("The null hypothesis is rejected and both population variance are not same at %d and %d degrees of freedom and 0.05 level of significance\n",n1-1,n2-1);                                                                                                                                                                                                                                                                                                                                                                                             
    }
    else
    {
        printf("The null hypothesis is accepted and both population variance is same at %d and %d degrees of freedom and 0.05 level of significance\n",n1-1,n2-1);
    }



}
float average(float x[],int n)
{
    float a;
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    a=sum/n;
    return a;

}
float variance(float x[],int n)
{
    float sum=0,sum1=0,mean=0,variance1;
    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    mean=sum/(float)n;
    for(int i=0;i<n;i++)
    {
        sum1=sum1+(x[i]-mean)*(x[i]-mean);
    }   
    variance1=sum1/((float)(n-1));
    return variance1;

}  
void read(float arr[],FILE *f,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(f,"%f",&arr[i]);
    }
}
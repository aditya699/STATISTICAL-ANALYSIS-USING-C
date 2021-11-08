#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float t(float *ptr,float *ptr1,int n);
int main()
{
    int n;
    float arr1[30],arr2[30],t_stat_cal,dof,t_stat_tab;
    FILE *ptr,*ptr1;
    ptr = fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_b.txt","r");
    ptr1 = fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_a.txt","r");
    printf("Enter the number of observations in the data: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(ptr,"%f",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        fscanf(ptr1,"%f",&arr2[i]);
    }
    t_stat_cal=t(arr1,arr2,n);
    printf("The calculated value of t statistic is %f\n",t_stat_cal);
    if(t_stat_cal <0)
    {
        t_stat_cal=-t_stat_cal;
    }
    dof=n-1;
    printf("Enter the tabulated value of the t statistic at %f dof and 0.10 level of significance : ",dof);
    scanf("%f",&t_stat_tab);
    if(t_stat_cal>t_stat_tab)
    {
        printf("The null hypothesis is rejected so the treatment is effective\n");
    }
    else
    {
        printf("The null hypothesis is accepted so the treatment is effective\n");
    }
}
float t(float *ptr,float *ptr1,int n)
{
    float sum=0,sum1=0,mean,mean1,dev,dev1,S2,t;
    float arr3[30];
    for(int i=0;i<n;i++)
    {
        arr3[i]=*(ptr+i)-*(ptr1+i);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr3[i];
    }
    mean=sum/n;
    printf("The mean of devations is %f\n",mean);
    for(int i=0;i<n;i++)
    {
        sum1=sum1+pow(arr3[i]-mean,2);
    }
    S2=sum1/(n-1);
    printf("The value of S^2 is  %f\n",S2);
    t=(mean)/((sqrt(S2) / (sqrt(n))));
    return t;

}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float t(float *ptr,float *ptr1,float n1,float n2);
int main()
{
    float n1,n2;
    float arr1[30],arr2[30],t_stat_cal,dof,t_stat_tab;
    FILE *ptr,*ptr1;
    ptr = fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_a.txt","r");
    ptr1 = fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/fev_b.txt","r");
    printf("Enter the number of observations in the array 1: ");
    scanf("%f",&n1);
    printf("Enter the number of observations in the array 2: ");
     scanf("%f",&n2);
    for(int i=0;i<n1;i++)
    {
        fscanf(ptr,"%f",&arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        fscanf(ptr1,"%f",&arr2[i]);
    }
    t_stat_cal=t(arr1,arr2,n1,n2);
      if(t_stat_cal <0)
    {
        t_stat_cal=-t_stat_cal;
    }
    printf("The calculated value of t statistic is %f\n",t_stat_cal);
    dof=n1+n2-2;
    printf("Enter the tabulated value of the t statistic at %f dof and 0.05 level of significance : ",dof);
    scanf("%f",&t_stat_tab);
    if(t_stat_cal>t_stat_tab)
    {
        printf("The null hypothesis is rejected so the efficacy of both vaccines is different\n");
    }
    else
    {
        printf("The null hypothesis is accepted so the efficacy of both vaccines is same\n");
    }
}
float t(float *ptr,float *ptr1,float n1,float n2)
{
    float sum1=0,sum2=0,sum3=0,sum4=0,mean1,mean2,dev,dev1,S2,t;
    float arr3[30],arr4[30];
    for(int i=0;i<n1;i++)
    {
        sum1=sum1+*(ptr+i);
    }
    mean1=sum1/n1;
    printf("The mean of the array 1 is %f\n",mean1);
     for(int i=0;i<n2;i++)
    {
        sum2=sum2+*(ptr1+i);
    }
    mean2=sum2/n2;
    printf("The mean of the array 2 is %f\n",mean2);
    for (int i=0;i<n1;i++)
    {
        sum3=sum3+(*(ptr+i)-mean1)*(*(ptr+i)-mean1);
    }
      for (int i=0;i<n2;i++)
    {
        sum4=sum4+(*(ptr1+i)-mean2)*(*(ptr1+i)-mean2);
    }
    S2=(float)((float)1/(n1+n2-2))*((sum3+sum4));
    printf("The sum of the squares of the array 1 is %f\n",sum3);
    printf("The sum of the squares of the array 2 is %f\n",sum4);
    printf("The value of S^2 of the array 1 is %f\n",S2);
    t=(mean1-mean2)/((sqrt(S2))*(sqrt((1/n1)+(1/n2))));
    return t;



}

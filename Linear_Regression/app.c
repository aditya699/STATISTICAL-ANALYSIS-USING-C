#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include"mean.c"
#include"var.c"
#include"cov.c"
#include"cor.c"
#include"std.c"
extern float mean(float arr[],int n);
extern float var(float arr[],int n);
extern float cov(float x[],float y[],int n);
extern float cor(float x[],float y[],int n);
extern float std(float x[],int n);
int main()
{
    float mean_x,mean_y,var_x,var_y,cov_xy,cor_xy,std_x,std_y,m1,m2;
    FILE *ptr,*ptr1;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/Linear_Regression/inputX.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/Linear_Regression/inputY.txt","r");
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
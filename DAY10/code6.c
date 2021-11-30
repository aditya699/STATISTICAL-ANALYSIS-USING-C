#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float t(float *ptr, float *ptr1, float n1, float n2);
int main()
{
    float n1, n2;
    float t_stat_cal, dof, t_stat_tab;
    printf("Enter the number of observations in the array 1: ");
    scanf("%f", &n1);
    printf("Enter the number of observations in the array 2: ");
    scanf("%f", &n2);
    float *ptr;
    ptr=(float *)malloc(n1*sizeof(float));
    float *ptr1;
    ptr1=(float *)malloc(n2*sizeof(float));
    printf("Enter the elements of the array 1: \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%f", &(*(ptr + i)));
    }
    printf("Enter the elements of the array 2: \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%f", &(*(ptr1 + i)));
    }
    t_stat_cal = t(ptr, ptr1, n1, n2);
    if (t_stat_cal < 0)
    {
        t_stat_cal = -t_stat_cal;
    }
    printf("The calculated value of t statistic is %f\n", t_stat_cal);
    dof = n1 + n2 - 2;
    printf("Enter the tabulated value of the t statistic at %f dof and 0.05 level of significance : ", dof);
    scanf("%f", &t_stat_tab);
    if (t_stat_cal > t_stat_tab)
    {
        printf("The null hypothesis is rejected so the efficacy of both vaccines is different\n");
    }
    else
    {
        printf("The null hypothesis is accepted so the efficacy of both vaccines is same\n");
    }
    free(ptr);
    free(ptr1);

}
float t(float *ptr, float *ptr1, float n1, float n2)
{
    float sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, mean1, mean2, dev, dev1, S2, t;
    // float arr3[30], arr4[30];
    for (int i = 0; i < n1; i++)
    {
        sum1 = sum1 + *(ptr + i);
    }
    mean1 = sum1 / n1;
    printf("The mean of the array 1 is %f\n", mean1);
    for (int i = 0; i < n2; i++)
    {
        sum2 = sum2 + *(ptr1 + i);
    }
    mean2 = sum2 / n2;
    printf("The mean of the array 2 is %f\n", mean2);
    for (int i = 0; i < n1; i++)
    {
        sum3 = sum3 + (*(ptr + i) - mean1) * (*(ptr + i) - mean1);
    }
    for (int i = 0; i < n2; i++)
    {
        sum4 = sum4 + (*(ptr1 + i) - mean2) * (*(ptr1 + i) - mean2);
    }
    S2 = (float)((float)1 / (n1 + n2 - 2)) * ((sum3 + sum4));
    printf("The sum of the squares of the array 1 is %f\n", sum3);
    printf("The sum of the squares of the array 2 is %f\n", sum4);
    printf("The value of S^2 of the array 1 is %f\n", S2);
    t = (mean1 - mean2) / ((sqrt(S2)) * (sqrt((1 / n1) + (1 / n2))));
    return t;
}

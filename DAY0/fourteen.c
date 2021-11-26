#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *ptr;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/eleven_output.txt","w");
    float num ,sum=0,ss=0,sample_mean,sample_variance=0,sample_median,pop_mean,pop_var,pop_med,numbers[100],a,b,mid,temp,gamma;
    float theta,k;
    // printf("enter the value of parameter theta : ");
    // scanf("%f",&theta);
    printf("enter the value of parameter k : ");
    scanf("%f",&k);
    printf("enter the value of parameter a : ");
    scanf("%f",&a);
    printf("enter the value of parameter b : ");
    scanf("%f",&b);
    float var,mean;
    printf("enter the value of mean: ");
    scanf("%f",&mean);
    printf("enter the value of variance: ");
    scanf("%f",&var);
    srand(10000);
    for (int i = 0; i < 100; i++)
    {
        gamma=0;
        for(int j = 0; j < k; j++)
        {
        num=(float)rand()/RAND_MAX;
        num=a+num*(b-a);
        gamma=gamma+num;
        }
        gamma=(gamma-k/2)/(sqrt(k/12));
        gamma=gamma*sqrt(var)+mean;
        sum=sum+gamma;
        ss=ss+gamma*gamma;
        numbers[i]=gamma;
        fprintf(ptr,"%f\t",numbers[i]);

    }
    fprintf(ptr,"\n");
    sample_mean=sum/100;
    sample_variance=ss/100-sample_mean*sample_mean;
    // for (int i = 0; i < 100; i++)
    // {
    //     for (int j = i+1; j < 100; j++)
    //     {
    //         if (numbers[i]>numbers[j])
    //         {
    //             temp=numbers[i];
    //             numbers[i]=numbers[j];
    //             numbers[j]=temp;
    //         }
    //     }
    // }
    // sample_median=numbers[49];
    fprintf(ptr,"The value of the sample_mean is %f\n",sample_mean);
    // fprintf(ptr,"The value of the sample_median is %f\n",sample_median);
    fprintf(ptr,"The value of the sample_variance is %f\n",sample_variance);
    // pop_mean=k/theta;
    // pop_var=k/(theta*theta);
    // pop_med=(a+b)/2;
    fprintf(ptr,"The value of the pop_mean is %f\n",mean);
    fprintf(ptr,"The value of the pop_variance is %f\n",var);
    // fprintf(ptr,"The value of the pop_median is %f\n",pop_med);
    fclose(ptr);
    return 0;

}
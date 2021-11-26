#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *ptr;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/eleven_output.txt","w");
    float num ,sum=0,ss=0,sample_mean,sample_variance,sample_median,pop_mean,pop_var,pop_med,numbers[100],a,b,mid,temp,gamma,num1,num2,y1,y2,z;
    int dof;
    float theta,k;
    // printf("enter the value of parameter theta : ");
    // // scanf("%f",&theta);
    // printf("enter the value of parameter k : ");
    // scanf("%f",&k);
    // printf("enter the value of parameter a : ");
    // scanf("%f",&a);
    // printf("enter the value of parameter b : ");
    // scanf("%f",&b);
    printf("enter the  value of dof : ");
    scanf("%d",&dof);
    float var,mean;
    srand(10000);
    for (int i = 0; i < 50; i++)
    {
       z=0;
        for(int j = 0; j < dof/2; j++)
        {
        num1=(float)rand()/RAND_MAX;
        num2=(float)rand()/RAND_MAX;
        y1=sqrt(-2*log(num1))*cos(2*3.14*num2);
        y2=sqrt(-2*log(num1))*sin(2*3.14*num2);
        z=z+ (y1*y1) + (y2*y2);
        }
        sum=sum+z;
        ss=ss+z*z;
        fprintf(ptr,"%f\t",z);

    }
    fprintf(ptr,"\n");
    sample_mean=sum/50;
    sample_variance=ss/50-(sample_mean*sample_mean);
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
    pop_mean=dof;
    pop_var=2*dof;
    fprintf(ptr,"The value of the pop_mean is %f\n",pop_mean);
    fprintf(ptr,"The value of the pop_variance is %f\n",pop_var);
    // fprintf(ptr,"The value of the pop_median is %f\n",pop_med);
    fclose(ptr);
    return 0;

}
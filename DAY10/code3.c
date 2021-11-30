#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float random_genrator(float *p,int n,float k,float theta,FILE *f);
float sort_array(float *p,int n);

int main()
{
    FILE *f;
    f=fopen("result.txt","w");
    int n=25;
    float k=20,theta=0.5,*p,median;
    float output[25];
    random_genrator(output,n,k,theta,f);
    sort_array(output,n);
    median=output[(n+1)/2];
    fprintf(f,"\nThe sample median of the random numbers is %f\n",median);
    
}

float random_genrator(float *p,int n,float k,float theta,FILE *f)
{
    srand(12); 
    float gamma,num;
      for (int i = 1; i <= n; i++)
    {
        gamma=0;
        for (int j = 0; j < k; j++)
        {
             num=(float)rand()/RAND_MAX;
             num=-log(num)/theta;
             gamma=gamma +num;
        }
        *(p+i)=gamma;
        fprintf(f,"%f \t",*(p+i));   
    }

}

float sort_array(float *p,int n)
{
    float temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
}


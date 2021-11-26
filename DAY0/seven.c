#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *ptr,*ptr1;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/seveninput.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/sevenoutput.txt","w");
    int freq[40]={0},ll[40],ul[40],ncl,width;
    float raw[40],mm[40],sum=0,sumf=0,mean,var,cv,ss=0,min,max,range,mean1,var1,ss1=0,sum2=0;
   for (int i = 0; i < 40; i++)
   {
       fscanf(ptr,"%f",&raw[i]);
   }
   for(int i = 0; i < 40; i++)
   {
       sum=sum+raw[i];
       ss=ss+(raw[i]*raw[i]);
   }
    mean=sum/40;
    var=ss/40-mean*mean;
    cv=var/mean;
    fprintf(ptr1,"The raw statistics are:\n");
    fprintf(ptr1,"The value of mean is %f\n",mean);
    fprintf(ptr1,"The value of variance is %f\n",var);
    fprintf(ptr1,"The value of coefficient of variation is %f\n",cv);
    min=max=raw[0];
    for(int i = 0; i < 40; i++)
    {
        if(raw[i]<min)
        {
            min=raw[i];
        }
        if(raw[i]>max)
        {
            max=raw[i];
        }
    }
    fprintf(ptr1,"The value of minimum is %f\n",min);
    fprintf(ptr1,"The value of maximum is %f\n",max);
    range=max-min;
    fprintf(ptr1,"The value of range is %f\n",range);
    width=2;
    ncl=range/width;
    ll[0]=min;
    ul[0]=ll[0]+width;
    for(int i = 1; i <= ncl; i++)
    {
        ll[i]=ul[i-1];
        ul[i]=ll[i]+width;
    }
    for(int  i=0;i<40;i++)
    {
        for(int j=0;j<ncl;j++)
        {
            if(raw[i]>=ll[j] && raw[i]<ul[j])
            {
                freq[j]=freq[j]+1;
                break;
            }
        }
    }
    for(int  i = 0; i <= ncl; i++)
    {
        sumf=sumf+freq[i];
    }
    for(int i = 0; i <= ncl; i++)
    {
        mm[i]=(ul[i]+ll[i])/2;
    }
    for(int i = 0; i <= ncl; i++)
    {
        sum2=sum2+(freq[i]*mm[i]);
    }
    mean1=sum2/sumf;
    for(int i = 0; i <= ncl; i++)
    {
        ss1=ss1+(freq[i]*mm[i]*mm[i]);
    }
    var1=(ss1/sumf)-(mean1*mean1);
    fprintf(ptr1,"The value of statistics for grouped data is : \n");
    fprintf(ptr1,"The value of mean is %f\n",mean1);
    fprintf(ptr1,"The value of variance is %f\n",var1);
    fprintf(ptr1,"The value of coefficient of variation is %f\n",var1/mean1);
    fprintf(ptr1,"----------------------------------------\n");
    for (int i = 0; i <=ncl; i++)
    {
        fprintf(ptr1,"%d\t|%d\t|%d\n",ll[i],ul[i],freq[i]); 
    }
    fprintf(ptr1,"------------------------------------------\n");
    //Y Axis
   fprintf(ptr1,"_________________\n");
//X Axis
for(int i=0;i<=ncl;i++)
{
fprintf(ptr1,"||");
for(int j=1;j<=freq[i];j++)
fprintf(ptr1,"*");
fprintf(ptr1,"\n");
}

    

   
}
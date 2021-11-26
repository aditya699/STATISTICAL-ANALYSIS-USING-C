#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float mean ,var,cv,ss=0,sum=0,sumf;
    int ll[5],ul[5],mm[5],freq[5];
    printf("Enter the lower limit: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ll[i]);
    }
    printf("Enter the upper limit: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ul[i]);
    }
    for (int i=0;i<5;i++)
    {
        mm[i]=(ll[i]+ul[i])/2;
    }
    printf("Enter The frequcies are : \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&freq[i]);
    }
    for(int i=0;i<5;i++)
    {
        sumf=sumf+freq[i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+(mm[i]*freq[i]);
    }
    mean=sum/sumf;
    for(int i=0;i<5;i++)
    {
        ss=ss+(pow((mm[i]-mean),2)*freq[i]);
    }   
    var=ss/sumf;
    cv=(sqrt(var)/mean)*100;
    printf("The mean is %f\n",mean);
    printf("The variance is %f\n",var);
    printf("The coefficient of variation is %f\n",cv);

}
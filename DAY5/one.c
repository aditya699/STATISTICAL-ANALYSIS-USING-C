#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float read(float [],int n, FILE *fp);
float mean(float [],int n);
float variance(float [],int n);
float covariance(float [],float[],int n);
float correlation(float [],float[],int n);
int main()
{
    int n1,n2,n3;
    float x[30],y[30],z[30],rxy_z,rxy,ryz,rxz,multiple_correlation;
    FILE *ptr,*ptr1,*ptr2;
    ptr = fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/DAY5/x.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/DAY5/y.txt","r");
    ptr2=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY4/DAY5/z.txt","r");
    printf("enter the number of elements in the array x: ");
    scanf("%d",&n1);
    printf("enter the number of elements in the array y: ");
    scanf("%d",&n2);
    printf("enter the number of elements in the array z: ");
    scanf("%d",&n3);
    read(x,n1,ptr);
    read(y,n2,ptr1);
    read(z,n3,ptr2);
    rxy=correlation(x,y,n1);
    ryz=correlation(y,z,n2);
    rxz=correlation(x,z,n3);
    rxy_z=(rxy-(ryz*rxz))/((sqrt(1-ryz*ryz)*sqrt(1-rxz*rxz)));
    printf("The value of partial correlation is %f\n",rxy_z);
    multiple_correlation=((rxy*rxy)+(ryz*ryz)-(rxy*ryz*rxz))/(1-(rxz*rxz));
    printf("The value of multiple correlation is %f",multiple_correlation);

}
float read(float x[],int n, FILE *fp)
{
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%f",&x[i]);
    }
    return 0;
}
float mean(float x[],int n)
{
    int i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }   
    return sum/n;       
}
float variance(float x[],int n)
{
    int i;
    float sum=0,avg;
    avg=mean(x,n);
    for(i=0;i<n;i++)
    {
        sum=sum+pow((x[i]-avg),2);
    }
    return sum/n;
}
float covariance(float x[],float y[],int n)
{
    int i;
    float sum=0,avgx,avgy;
    avgx=mean(x,n);
    avgy=mean(y,n);
    for(i=0;i<n;i++)
    {
        sum=sum+((x[i]-avgx)*(y[i]-avgy));
    }   
    return sum/n;   
}
float correlation(float x[],float y[],int n)
{
    int i;
    float mean_x,mean_y,variance_x,variance_y,cov,correlation;
    mean_x=mean(x,n);
    mean_y=mean(y,n);
    variance_x=variance(x,n);       
    variance_y=variance(y,n);
    cov=covariance(x,y,n);                   
    correlation=cov/(sqrt(variance_x*variance_y));

    return correlation;
}
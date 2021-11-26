// FIT A BINOMIAL DISTRBUTION FOR GROUPED DATA
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int ncx(int n,int x);
int fact(int n);

int main()
{
    FILE *ptr;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/17_o.txt","w");
    int n,sum=0,sumf=0,c=0,k;
    float mean,p,ef[20],freq[20],tab_value,calc_chi=0;
    printf("Enter the number of groups\n");
    scanf("%d",&n);
    printf("Enter the freq of rotten orages ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f",&freq[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+freq[i]*i;

    }
    for (int i = 0; i < n; i++)
    {
        sumf=sumf+freq[i];
    }
    mean=(float)sum/sumf;
    fprintf(ptr,"The mean of the binomial is %f\n",mean);
    p=mean/n;
    fprintf(ptr,"The probability of getting a rotten orange is %f\n",p);
    for (int i = 0; i < n; i++)
    {
        ef[i]=sumf*ncx(n,i)*pow(p,i)*pow(1-p,n-i);
    }
    fprintf(ptr,"---------------------------------------------------\n");
    fprintf(ptr,"sno | freq |ef\n");
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr,"%d | %f | %f\n",i,freq[i],ef[i]);
    }
    fprintf(ptr,"---------------------------------------------------\n");
    for(int i=n;i>=0;i--)
  if(ef[i]<=5)
{ef[i-1] += ef[i];
freq[i-1] += freq[i];
freq[i] = 0;
ef[i]=0;
c = c+1;
}
k = n+1-c-2;
fprintf(ptr,"After polling:  %d\n",k);
fprintf(ptr,"---------------------------------------------------\n");
fprintf(ptr,"sno | freq |ef\n");
    for (int i = 0; i <= n-c; i++)
    {
        fprintf(ptr,"%d | %f | %f\n",i,freq[i],ef[i]);
        calc_chi += (pow(freq[i]-ef[i],2))/ef[i];
    }
    fprintf(ptr,"---------------------------------------------------\n");
    printf("Enter tabulated value of chi square for %d degrees of freedom at 0.05 level of significance: ",k);
	scanf("%f",&tab_value);
	fprintf(ptr,"\nCalculated value of chi sq is %.4f\nTabulated value of chi sq for %d degrees of freedom is %.4f at 0.05 level of significance.",calc_chi,k,tab_value);
	if(calc_chi<=tab_value)
		fprintf(ptr,"\nSince calculated value is less than tabulated value we fail to reject our null hypothesis and Binomial distribution is a good fit to the given data");
	else
		fprintf(ptr,"\nSince calculated value is greater than tabulated value we reject our null hypothesis and Binomial distribution is not a good fit to the given data");
    
}
int ncx(int n,int x)
{
    float ncx;
    ncx=fact(n)/(fact(x)*fact(n-x));
    return ncx;


}
int fact(int n)
{
    int fact=1; 
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }   

    return fact;
}
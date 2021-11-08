#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int rank( int a ,float arr[],int n);
void read(float arr[],FILE *f,int n);
int main()
{
    float arr1[30],arr2[30],rx[30],ry[30],rank_corr;
    int n1,n2,di,ss;
    FILE *ptr,*ptr1;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY6/inputx.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/C_BY_ADITYA/DAY6/inputy.txt","r");
    printf("enter the number of elements in the array1: ");
    scanf("%d",&n1);
    printf("enter the number of elements in the array2: ");
    scanf("%d",&n2);
    read(arr1,ptr,n1);
    read(arr2,ptr1,n2);
    for (int i = 0; i < n1; i++)
    {
        rx[i]=rank(arr1[i],arr1,n1);
        ry[i]=rank(arr2[i],arr2,n2);
        di=rx[i]-ry[i];
        ss=ss+di*di;

    }
    rank_corr=1-(6.0 * ss)/(n1*(n1*n1-1));
    printf("the rank correlation is %f",rank_corr);


}
void read(float b[],FILE *f,int n)
{
    for (int i = 0; i < n; i++)
    {
        fscanf(f,"%f",&b[i]);
    }
}

int rank(int a,float b[],int n)
{
    int i ,r=1;
    for(i=0;i<n;i++)
    {
        if(a<b[i])
        {
            r++;
        }
    }
    return r;

}
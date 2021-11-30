#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void read(int a[][3],FILE *fp,int n);
int add(int arr[3][3],int arr1[3][3],int arr2[3][3]);
int multiply(int arr[3][3],int arr1[3][3],int arr2[3][3]);
int trace(int arr[3][3],int n);
int main()
{
    FILE *ptrx,*ptra,*ptrb;
    ptrx=fopen("C:/Users/aditya/Desktop/C_programming/Final_c/1in.txt","r");
    ptra=fopen("C:/Users/aditya/Desktop/C_programming/Final_c/1in1.txt","r");
    ptrb=fopen("C:/Users/aditya/Desktop/C_programming/Final_c/1out.txt","w");
    int arr[3][3],arr1[3][3],n=3,k=0;
    read(arr,ptrx,n);
    read(arr1,ptra,n);
    int arr2[3][3]={0,0,0,0,0,0,0,0,0};
    int arr3[3][3]={0,0,0,0,0,0,0,0,0};
    int arr4[3][3]={0,0,0,0,0,0,0,0,0};
    int arr5[3][3]={0,0,0,0,0,0,0,0,0};
    int arr6[3][3]={0,0,0,0,0,0,0,0,0};
    int arr7[3][3]={1,0,0,0,1,0,0,0,1};
    int *ptr,*ptr2;
    ptr=arr[0];
fprintf(ptrb,"the 1 array is \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        fprintf(ptrb,"%d\t",*(*(arr+i)+j));
        }
    fprintf(ptrb,"\n");
    }
fprintf(ptrb,"\n");
fprintf(ptrb,"the 2 array is \n");
    ptr2=&arr[0][0];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        fprintf(ptrb,"%d\t",*(*(arr1+i)+j));
        }
    fprintf(ptrb,"\n");
    }
    add(arr,arr1,arr2);
fprintf(ptrb,"\n");
fprintf(ptrb,"the sum array is \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        fprintf(ptrb,"%d\t",*(*(arr2+i)+j));
        }
    fprintf(ptrb,"\n");
    }
    multiply(arr,arr1,arr3);
fprintf(ptrb,"\n");
fprintf(ptrb,"the product array is \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        fprintf(ptrb,"%d\t",*(*(arr3+i)+j));
        }
    fprintf(ptrb,"\n");
    }
    multiply(arr,arr,arr4);
    add(arr4,arr3,arr5);
    add(arr5,arr7,arr6);
fprintf(ptrb,"\n");
fprintf(ptrb,"the value  of special  array is \n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
        fprintf(ptrb,"%d\t",*(*(arr6+i)+j));
        }
    fprintf(ptrb,"\n");
    }
    k=trace(arr6,3);
    fprintf(ptrb,"\n");
    fprintf(ptrb,"the trace of the array is %d\n",k);

}

int add(int arr[3][3],int arr1[3][3],int arr2[3][3])
{
    int *ptr,*ptr1,*ptr2;
    ptr=arr[0];
    ptr1=arr1[0];
    ptr2=arr2[0];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            *(*(arr2+i)+j)=*(*(arr1+i)+j)+*(*(arr+i)+j);
        }
    }

}

int multiply(int arr[3][3],int arr1[3][3],int arr2[3][3])
{
    int *ptr,*ptr1,*ptr2;
    ptr=arr[0];
    ptr1=arr1[0];
    ptr2=arr2[0];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)

        { arr2[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                *(*(arr2+i)+j)+=(*(*(arr+i)+k))*(*(*(arr1+k)+j));
            }


        }
    }
}

int trace(int arr[3][3],int n)
{
    int *ptr;
    ptr=arr[0];
    int sum=0;
    for (int i=0;i<3;i++)
    {
        sum+=*(*(arr+i)+i);
    }
    return sum;

}

void read(int a[][3],FILE *fp,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(fp,"%d",&a[i][j]);
        }
    }
}
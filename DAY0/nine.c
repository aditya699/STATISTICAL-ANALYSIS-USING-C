#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *ptr,*ptr1,*ptr2;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/nineinput1.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/nineinput2.txt","r");
    ptr2=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/nineoutput.txt","w");
    int a[5][5],b[5][5],c[5][5];
    int row1,col1,row2,col2;
    printf("enter the number of rows in matrix a");
    scanf("%d",&row1);
    printf("enter the number of columns in matrix a");
    scanf("%d",&col1);
    printf("enter the number of rows in matrix b");
    scanf("%d",&row2);
    printf("enter the number of columns in matrix b");
    scanf("%d",&col2);
    if(col2!=row1) 
    {
        printf("matrix multiplication failed due to bad input");
        exit(0);

    }
    else
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                fscanf(ptr,"%d",&a[i][j]);
            }
        }
        for(int i=0;i<row2;i++)
        {
            for(int j=0;j<col2;j++)
            {
                fscanf(ptr1,"%d",&b[i][j]);
            }
        }
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<col1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        fprintf(ptr2,"the resultant matrix is\n");
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                fprintf(ptr2,"%d\t",c[i][j]);
            }
            fprintf(ptr2,"\n");
        }
    }

}
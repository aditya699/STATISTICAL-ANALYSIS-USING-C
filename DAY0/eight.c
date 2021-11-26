#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    FILE *ptr,*ptr1,*ptr2;
    ptr=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/eightinput1.txt","r");
    ptr1=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/eightinput2.txt","r");
    ptr2=fopen("C:/Users/aditya/Desktop/C_programming/DAY0/eightoutput.txt","w");
    int a[10][10],b[10][10],c[10][10],row1,row2,col1,col2;
    printf("enter the number of rows in matrix a: ");
    scanf("%d",&row1);
    printf("enter the number of columns in matrix a: ");
    scanf("%d",&col1);
    printf("enter the number of rows in matrix b: ");
    scanf("%d",&row2);
    printf("enter the number of columns in matrix b: ");
    scanf("%d",&col2);
    if(col1!=row2)
    {
        printf("matrices cannot be multiplied");
        exit(0);
    }
    for (int i = 0; i < row1; i++)
    {
        for ( int j = 0; j < col1; j++)
        {
            fscanf(ptr,"%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < row2; i++)
    {
        for ( int j = 0; j < col2; j++)
        {
            fscanf(ptr1,"%d",&b[i][j]);
        }
        
    }
    for (int i=0 ; i < row1; i++)
    {
        for ( int j = 0; j < col1; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    fprintf(ptr1,"The sum of the matrix is : \n");
    for (int i = 0; i < row1; i++)
    {
        for ( int j = 0; j < col1; j++)
        {
            fprintf(ptr2,"%d ",c[i][j]);
        }
        fprintf(ptr2,"\n");
    }
    int sum=0;
    for (int i = 0; i < row1; i++)
    {
        sum=sum+c[i][i];
    }   
    fprintf(ptr2,"The trace of the matrix is : %d",sum);
    
    
}
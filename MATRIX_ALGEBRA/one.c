#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int add (int a[][5],int b[][5],int c,int d,FILE *f);
int mul (int a[][5],int b[][5],int c,int d,FILE *f);
int main() 
{
    int i,j;
    FILE *f;
    f=fopen("C:/Users/aditya/Desktop/C_programming/MATRIX_ALGEBRA/output.txt","w");
    int row1,row2,col1,col2;
    int a[5][5],b[5][5],c[5][5],Y[5][5],l[5][5],o[5][5];
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d%d",&row1,&col1);;
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d%d",&row2,&col2);
    printf("Enter the elements of matrix a:\n");

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the matrix b: \n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<row2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
       for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            l[i][j]=a[i][j]+b[i][j];
        }
    }
       for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            o[i][j]=a[i][j]+b[i][j];
        }
    }
    add( a, b,row1,col1,f);
    mul(a,b,row1,col1,f);
    mul(l,o,row1,col1,f);
}

int add(int a[5][5], int b[5][5],int c,int d,FILE *f)
{
    int sum[5][5];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    fprintf(f,"The sum of the two matrices is: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            fprintf(f,"%d ",sum[i][j]);
        }
        fprintf(f,"\n");
    }
    return 0;
}
int mul(int a[5][5], int b[5][5],int c,int d,FILE *f)
{
    int i,j,k;
    int mul[5][5];
  for(i=0;i<c;i++)
  {
      for (j = 0; j < d; j++)
      {
          mul[i][j] = 0;
          for (k = 0; k < d; k++)
          {
              mul[i][j] += a[i][k] * b[k][j];
          }
      }
  }
  fprintf(f, "The product of the two matrices is: \n");
  for (int i = 0; i < c; i++)
  {
      for (int j = 0; j < d; j++)
      {
          fprintf(f, "%d ", mul[i][j]);
      }
      fprintf(f, "\n");
    } 
}  

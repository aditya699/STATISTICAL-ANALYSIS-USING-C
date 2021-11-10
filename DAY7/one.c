#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[3][3];
    printf("enter the elememts of the array: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter a[%d][%d] : \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the array is: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
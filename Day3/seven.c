#include<stdio.h>
int great(int *ptr,int n);
int main()
{
    int n ,arr[20],a;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=great(arr,n);
    printf("The greatest element of the array is %d",a);
}
int great(int *ptr,int n)
{
    int max=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }
    return max;
}
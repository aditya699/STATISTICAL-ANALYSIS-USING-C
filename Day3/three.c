#include<stdio.h>
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    printf("The first element of the array is %d",arr[0]);
    printf("\nThe addresses of first element of the array is %x",&arr[0]);
    printf("\nThe addresses of second element of the array is %x",&arr[1]);
     printf("\nThe addresses of second element of the array is %x",arr+1);
     printf("\nThe second element of the array is %d",arr[1]);
       printf("\nThe second element of the array is %d",*(arr+1));
}
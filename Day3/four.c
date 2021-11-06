// Function to calculate the mean of array
#include<stdio.h>
int avg(int array[],int n);
int main()
{
    int arr[30];
    float mean;
    int n;
    printf("How many numbers are in the array :");
    scanf("%d", &n);
    printf("Enter the numbers in the array keeping memory allocation in mind:\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter element at arr[%d]",i);
        scanf("%d", &arr[i]);
    }
    mean=avg(arr,n);
    printf("The mean of the array is %f",mean);
    return 0;

}

int avg(int array[],int n)
{
int sum=0;
float a;
for(int i=0;i<n;i++)
{
    sum=sum+array[i];
}
a=sum/n;
return a;
}
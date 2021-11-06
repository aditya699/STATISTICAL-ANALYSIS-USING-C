#include <stdio.h>
int avg(int * ptr,int n);
int main()
{
    int n;
    float mean;
    int array[20];
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    mean=avg(array,n);
    printf("The mean of the array is %f\n",mean);
    return 0;   


}
int avg(int * ptr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    return sum/n;
}
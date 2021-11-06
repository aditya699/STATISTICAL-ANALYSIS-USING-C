#include <stdio.h>
int sort (int *ptr,int n);
int main()
{
    int n ,arr[20],sarr[20];
    printf("please enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   sort(arr ,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
int sort(int *ptr,int n)
{
    int a;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (*(ptr+i) > *(ptr+j))
            {
                a=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=a;
            }
            
        }
    }
    
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int *ptr;
    ptr=arr[0];
    printf("%x\n",ptr);
    ptr=&arr[0][0];
    printf("%x\n",ptr);
    printf("%x\n",arr);
    printf("%x\n",&arr[0][0]);
    printf("%x\n",&arr);
    printf("%x\n",*arr);
    printf("%x\n",arr[0]);
    printf("%x\n",arr+1);
    printf("%x\n",&arr[1][0]);
    printf("%x\n",&arr[1]);
    printf("%x\n",*(arr+1));
    printf("%x\n",arr[1]);
    printf("%x\n",&arr[1][0]);
    printf("%x\n",*(arr+1)+2);

}
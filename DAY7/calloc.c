#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("The elements are: \n");
    for (int i = 0; i <n; i++)
    {
        printf("The value at position %d is %d \n", i,ptr[i]);
    }

    printf("Enter the new number of elements: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i <n; i++)
    {
        printf("Enter the element %d: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("The elements are: \n");
    for (int i = 0; i <n; i++)
    {
        printf("The new value at position %d is %d \n", i,ptr[i]);
    }
    free(ptr);


    return 0;
}
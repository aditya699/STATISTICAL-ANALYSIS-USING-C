#include<stdio.h>

float mean (float arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum / n;
}
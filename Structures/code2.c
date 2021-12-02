// USING STRUCTURES AS GLOBAL VARIABLES CONCEPT
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct details
{
    int age ;
    int income;
};

struct  details aditya;

void print()
{
    printf("%d",aditya.age);
}

int main()

{
    aditya.age =20;
    print();
}

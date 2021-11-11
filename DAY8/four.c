#include<stdio.h>

union students
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    union students aditya;
    aditya.roll = 1;
    printf("The roll number of aditya is %d ",aditya.roll);
}
// HERE ONLY 4 BITES WILL BE RESERVED ( IT DEPENDS ON THE SYSTEM TO SYSTEM  BUT STILL CONCSIDER A BASIC 32 BIT SYSTEM)
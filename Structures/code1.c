// // UNDERSTANDING STRUCTURES IN C
// #include<stdio.h>
// #include<stdlib.h>

// struct details
// {
//     int age;
//     int marks;
// };

// int main()
// {
//     struct details aditya;
//     aditya.age=20;
//     aditya.marks=20;
//     printf("the age of aditya is : %d\n",aditya.age);
//     printf("the age of aditya is : %d",aditya.marks);
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct details
{
    int age;
    int marks;
    char name[100];
};

int main()
{
    struct details aditya;
    aditya.age=20;
    aditya.marks=10;
    strcpy(aditya.name,"aditya");
    printf("the age of aditya is : %d\n",aditya.age);
    printf("the marks of aditya is : %d\n",aditya.marks);
    printf("the name of aditya is : %s",aditya.name);
}
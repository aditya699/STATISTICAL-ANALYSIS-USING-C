#include<stdio.h>

struct student
{
    int rollno;
    char *name;
    int marks;
};

int main()
{
    struct student s1[2];
    s1[0].rollno =1;
    s1[0].marks = 100;
    s1[0].name="Aditya";
    s1[1].rollno =2;
    s1[1].marks = 200;
    s1[1].name="Ankit";
    printf("The roll no is %d and the nane is %s and marks are %d\n",s1[0].rollno,s1[0].name,s1[0].marks);
    printf("The roll no is %d and the nane is %s and marks are %d\n",s1[1].rollno,s1[1].name,s1[1].marks);

   
}
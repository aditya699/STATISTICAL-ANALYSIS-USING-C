#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char *name;
    int marks;
    char gender[20];
};

int main()
{
    struct student aditya,aman,ajay;
      aditya.name="adi";
    aman.name="aman";
    ajay.name="ajay";
    aditya.rollno =1;
    aman.rollno =2;
    ajay.rollno =3;
    aditya.marks=20;
    aman.marks=10;
    ajay.marks=30;
    strcpy(aman.gender,"male");
    printf("aditya has roll no %d and he scored %d marks and his name is %s\n",aditya.rollno,aditya.marks,aditya.name);
    printf("aman has roll no %d and he scored %d marks and his name is %s\n",aman.rollno,aman.marks,aman.name);
    printf("ajay has roll no %d and he scored %d marks and his name is %s\n",ajay.rollno,ajay.marks,ajay.name);
    printf("gender of aman is %s\n",aman.gender);
}
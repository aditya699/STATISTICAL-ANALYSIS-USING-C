#include<stdio.h>
#include<stdlib.h>


struct details 
{
    int age ;
    int salary;
};
void display(struct details *p);
int main()
{
    struct details s1;
    printf("Enter the age and salary\n");
    scanf("%d%d",&s1.age,&s1.salary);
    display(&s1);
}

void display(struct details *p)
{
    printf("\n age is %d",p->age);
    printf("\n salary is %d",p->salary);
}
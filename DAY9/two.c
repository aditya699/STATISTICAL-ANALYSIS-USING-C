#include<stdio.h>

struct grades 
{
    int maths[10];
    int science[10];
    int english[10];
    int computer[10];
};

int main()
{
    struct grades g;
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the marks of maths %d: ",i+1);
        scanf("%d",&g.maths[i]);
        printf("Enter the marks of science %d: ",i+1);
        scanf("%d",&g.science[i]);
        printf("Enter the marks of english %d: ",i+1);
        scanf("%d",&g.english[i]);
        printf("Enter the marks of computer %d: ",i+1);
        scanf("%d",&g.computer[i]);
    }

}

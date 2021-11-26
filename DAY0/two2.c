// switch statement
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int marks , set,n;
    printf("How many subjects are there: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the marks ur boy has got ");
        scanf("%d",&marks);
        set=marks/10;
        switch(set)
        {
            case 10:
            case 9 :
            case 8:
            printf("Great work u r topper\n");
            break;
            case 7:
            case 6:
            case 5:
            printf("Good work ladke\n");
            break;
            case 4:
            case 3:
            case 2 :
            case 1:
            printf("I love u sir pls imporove\n");
        }
        
    }
}
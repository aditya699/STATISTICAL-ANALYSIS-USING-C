#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a,b,c,d,root1,root2,real_part,img_part;
    printf("enter the value of a , b and c");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d > 0)
    {
        root1=(-b+sqrt(b*b-4*a*c))/2*a;
        root2=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("The value of root1 is %f \n",root1);
        printf("The value of root2 is %f ",root2);
        
    }
    else if (d=0)
    {
        root1=-b/2*a;
        root2=-b/2*a;
        printf("The value of root1 is %f",root1);
        printf("\n");
        printf("The value of root2 is %f",root2);
    }
    else
    {
        real_part=-b/2*a;
        img_part=sqrt(-d)/2*a;
        printf("The value of root1 is %f+i%f",real_part,img_part);
        printf("\n");
        printf("The value of root1 is %f-i%f",real_part,img_part);
        
    }
    
    
}
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main()
// {
//     float result,d,theta=1.5;
//     printf("--------------------------------------------\n");
//     printf("|  i  |  1/theta * exp(-theta*x)\n");
//     for(int i=1;i<=10;i++)
//     {
//         d=1/theta;
//         result=d*exp(-i*theta);
//         // printf("|  i  |  1/theta * exp(-theta*x)\n");
//         printf("| %d |%f\n",i,result);
        
//     }
//     printf("--------------------------------------------");
    
    
// }
#include<stdio.h>
#include<math.h>

int main()
{
    float k =1.5;
    for (int i =0 ; i<20; i++)
    {
        printf("---");
    }
    printf("\n");
    for (int j=0 ;j <10 ;j++)
    {
        printf("||");
        for (int i = 0; i <= 100*(1/k)*exp((-(1/k)*j)); i++)
        {
            printf(" ");
        }
        printf("*\n");
        
    }
}

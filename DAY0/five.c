#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float sum=0,ss=0,mean,var,median;
    FILE *ptr1,*ptr2;
    ptr1 = fopen("C:/Users/aditya/Desktop/C_programming/DAY0/fiveinput.txt","r");
    ptr2 = fopen("C:/Users/aditya/Desktop/C_programming/DAY0/fiveoutput.txt","w");
    float x[50];
    for (int i = 0; i < 35; i++)
    {
        fscanf(ptr1,"%f",&x[i]);
    }
    for(int i = 0; i < 35; i++)
    {
        sum = sum + x[i];
        ss=ss+(x[i]*x[i]);
    }
    mean = sum/35;
    var = (ss/35)-(mean*mean);
    //sort a array
    for(int i = 0; i < 35; i++)
    {
        for(int j = i+1; j < 35; j++)
        {
            if(x[i] > x[j])
            {
                float temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    median = (x[(35+1)/2])/2;
    fprintf(ptr2,"The mean is : %f\n",mean);
    fprintf(ptr2,"The variance is : %f\n",var);
    fprintf(ptr2,"The median is : %f\n",median);
    fclose(ptr1);
    fclose(ptr2);
}
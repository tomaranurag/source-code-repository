#include<stdio.h>
#include"number.h"

int fibonacci_series(int limit)
{
    int i=0,j=1,count=2,num;
    printf("\t\t\t#############################################################\n");
    printf("\t\t\tFibonacci Series is: ");
    printf("%d\t %d\t",i,j);
    while(count<limit)
    {
        num=i+j;
        count++;
        printf("%d\t",num);
        i=j;
        j=num;
    }
    printf("\n");
    printf("\t\t\t#############################################################\n");
    return 0;
}


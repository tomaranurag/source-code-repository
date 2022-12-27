#include<stdio.h>
#include"number.h"

int prime_between_number(int n1,int n2)
{
    int i,j,flag;
    printf("\t\t\t################################################\n");
    printf("\t\t\tPrime Number Between %d to %d is: ",n1,n2);
    for(i=n1+1;i<n2;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n\t\t\t################################################\n");
    return 0;
}

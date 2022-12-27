#include<stdio.h>
#include<math.h>
#include"number.h"

int armstrong_number(int armnum)
{
    int temp,count=0,sum=0,rem;
    temp=armnum;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    temp=armnum;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==armnum)
    {
        printf("\t\t\t#######################################\n");
        printf("\t\t\t\"%d\" is a Armstrong Number \n",armnum);
        printf("\t\t\t#######################################\n");
    }
    else
    {
        printf("\t\t\t#######################################\n");
        printf("\t\t\t\"%d\" is not a Armstrong Number \n",armnum);
        printf("\t\t\t#######################################\n");
    }
    return 0;
}

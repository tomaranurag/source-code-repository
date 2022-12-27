#include<stdio.h>
#include"number.h"

int prime_number(int pnum)
{
    int i,flag=0;
    for(i=2;i<pnum/2;i++)
    {
        if(pnum%i==0)
        {
            flag=1;
            break;
        }
    }
    if(pnum==1)
    {
        printf("\t\t\t#########################################################\n");
        printf("\t\t\t\"%d\" is neither Prime Number nor Composite Number. \n",pnum);
        printf("\t\t\t#########################################################\n");
    }
    else
    {
        if(flag==0)
        {
            printf("\t\t\t########################################\n");
            printf("\t\t\t\"%d\" is a Prime Number \n",pnum);
            printf("\t\t\t########################################\n");
        }
        else{
            printf("\t\t\t########################################\n");
            printf("\t\t\t\"%d\" is not a Prime Number \n",pnum);
            printf("\t\t\t########################################\n");
        }
    }
    return 0;
}

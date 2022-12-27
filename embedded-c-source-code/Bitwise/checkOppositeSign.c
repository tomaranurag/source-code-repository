#include<stdio.h>
#include"bitwise.h"

int check_opposite_sign(int data, int val)
{
    int flag=0;

    flag=((data^val)<0);
    if (flag==1)
    {
        printf("\n\t\tInteger have the Opposite Sign\n");
    }
    else
    {
        printf("\n\t\tInteger have the Same Sign\n");
    }
    return 0;
}

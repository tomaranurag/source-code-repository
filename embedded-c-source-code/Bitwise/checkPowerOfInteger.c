#include<stdio.h>
#include"bitwise.h"

int check_power_of_integer(int data)
{
    int flag=0;

    flag=((data!=0) && !(data &(data-1)));

    if(flag==1){
        printf("\n\t\tInteger is a Power Of 2\n");
    }
    else{
        printf("\n\t\tInter is not a Power Of 2\n");
    }
    return 0;
}

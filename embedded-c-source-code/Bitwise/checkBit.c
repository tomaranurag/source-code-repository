#include<stdio.h>
#include"bitwise.h"

int bit_check(unsigned char data,int pos)
{
    printf("\n\t\tInitially Data is : 0x%x",data);

    if(data &=(1<<pos)) {
        printf("\n\t\t%dth Bit is Set\n",pos);
    }
    else {
        printf("\n\t\t%dth Bit is not Set\n",pos);
    }
    return 0;
}

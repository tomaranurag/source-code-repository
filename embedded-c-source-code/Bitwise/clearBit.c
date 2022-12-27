#include<stdio.h>
#include"bitwise.h"

int clear_bit(unsigned char data,int pos)
{
    printf("\n\t\tInitially Data is : 0x%x",data);

    data &=~(1<<pos);

    printf("\n\t\tAfter Clear the %dth Bit,Now Data will be : 0x%x",pos,data);
    return 0;
}

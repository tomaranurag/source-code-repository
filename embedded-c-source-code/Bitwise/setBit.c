#include<stdio.h>
#include"bitwise.h"

int bit_set(unsigned char data,int pos)
{
    printf("\n\t\tInitially Data is : 0x%x",data);

    data !=(1<<pos);

    printf("\n\t\tAfter Set the %dth Bit,Now Data will be : 0x%x",pos,data);
    return 0;
}

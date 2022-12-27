#include<stdio.h>
#include"bitwise.h"

int check_integer_sign(int data)
{
    int sign=0;

    sign=(data>0)-(data<0);

    if (sign==1)
    {
        printf("\n\t\tNumber is a Positive Number\n");
    }
    else if(sign==-1)
    {
        printf("\n\t\tNumber is a Negative Number\n");
    }
    else{
        printf("\n\t\tNumber is Zero\n");
    }
    return 0;
}

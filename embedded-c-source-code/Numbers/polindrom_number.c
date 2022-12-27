#include <stdio.h>
#include "number.h"
int palindrome_number(int number)
{
    int rem,num,pali=0;
    num=number;
    while(number>0)
    {
        rem=number%10;
        pali=pali*10+rem;
        number=number/10;
    }
    if (num==pali)
    {
        printf("\n\t\t\t########################################\n");
        printf("\t\t\t\"%d\" is a Palindrome Number \n",num);
        printf("\n\t\t\t########################################\n");
    }
    else
    {
        printf("\n\t\t\t########################################\n");
        printf("\t\t\t\"%d\" is not a Palindrome Number\n",num);
        printf("\n\t\t\t########################################\n");
    }
    return 0;
}

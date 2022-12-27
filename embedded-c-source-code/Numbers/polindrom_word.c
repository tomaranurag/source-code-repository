#include<stdio.h>
#include<string.h>
#include"number.h"

int palindrome_word(char *str)
{
    int i=0,str_len;
    str_len=strlen(str)-(i+1);
    while(1)
    {
        if (str[i++]==str[str_len--])
        {
            if (i==str_len || i+1==str_len)
            {
                printf("\t\t\t########################################\n");
                printf("\t\t\t\"%s\" is a Palindrome String \n",str);
                printf("\t\t\t########################################\n");
                break;
            }
        }
        else
        {
            printf("\t\t\t########################################\n");
            printf("\t\t\t\"%s\" is not a Palindrome String \n",str);
            printf("\t\t\t########################################\n");
            break;
        }
    }
    return 0;
}

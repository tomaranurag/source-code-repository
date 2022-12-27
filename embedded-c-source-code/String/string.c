#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include"string.h"

#define MAX 50

int string_func()
{
    int choice;
    char str[MAX];
    do{
        printf("\n\t\t::::::::::String Function Menu::::::::::\n");
        printf("\t\t1. Reverse the Word\n");
        printf("\t\t2. EXIT\n");
        printf("\n\t\tEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\n\t\tEnter the String : ");
                fgets(str, sizeof(str), stdin);
                reverse_word(str);
                break;
            case 2:
                printf("\n\t\tExiting from Bitwise Function's Menu....\n");
                break;
            default:
                printf("\n\t\tPlease Enter the Correct Choice\n");
                break;
        }
    }while(choice!=2);
    return 0;
}

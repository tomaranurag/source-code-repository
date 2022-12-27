#include<stdio.h>
#include<stdio.h>
#include"searching.h"

int searching_func()
{
    int choice;

    do{
        printf("\n\t\t::::::::::Searching Function Menu::::::::::\n");
        printf("\t\t1. Linear Search\n");
        printf("\t\t2. Binary Search\n");
        printf("\t\t3. EXIT\n");
        printf("\n\t\tEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                linear_search();
                break;
            case 2:
                binary_search();
                break;
            case 3:
                printf("\n\t\tExiting from Bitwise Function's Menu....\n");
                break;
            default:
                printf("\n\t\tWrong Choice!!!....Please Enter the Correct Choice\n");
                break;
        }
    }while(choice!=3);
    return 0;
}

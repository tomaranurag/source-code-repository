#include<stdio.h>
#include<stdlib.h>
#include"number.h""

#define MAX 50

int number_func()
{
    int number,limit,armnum,choice;
    int pnum,pnum1,pnum2;
    char str[MAX];
    do{
        printf("\n\t\t\t::::::::::Numbers Menu::::::::::\n");
        printf("\t\t\t1. Palindrome Number\n");
        printf("\t\t\t2. Palindrome String\n");
        printf("\t\t\t3. Fibonacci Series\n");
        printf("\t\t\t4. Armstrong Number\n");
        printf("\t\t\t5. Prime Number\n");
        printf("\t\t\t6. Prime Number Between two Interval\n");
        printf("\t\t\t7. EXIT\n");
        printf("\n\t\t\tEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\t\t\tEnter a Palindrome Number : ");
                scanf("%d",&number);
                palindrome_number(number);
                break;
            case 2:
                printf("\t\t\tEnter a Palindrome String : ");
                scanf("%s",str);
                palindrome_word(&str);
                break;
            case 3:
                printf("\t\t\tEnter the Limit for Fibonacci Series:");
                scanf("%d",&limit);
                fibonacci_series(limit);
                break;
            case 4:
                printf("\t\t\tEnter a Armstrong Number : ");
                scanf("%d",&armnum);
                armstrong_number(armnum);
                break;
            case 5:
                printf("\t\t\tEnter the Prime Number : ");
                scanf("%d",&pnum);
                prime_number(pnum);
                break;
            case 6:
                printf("\t\t\tEnter two number : ");
                scanf("%d %d",&pnum1,&pnum2);
                prime_between_number(pnum1,pnum2);
                break;
            case 7:
                printf("\n\t\t\tExiting from Numbers Menu....\n");
                break;
            default:
                printf("\n\t\t\tPlease Enter the Correct Choice\n");
                break;
        }
    }while(choice!=7);

    return 0;
}

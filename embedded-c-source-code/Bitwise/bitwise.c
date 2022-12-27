#include<stdio.h>
#include<stdlib.h>
#include"bitwise.h"

int bitwise_func()
{
    int choice,value1,value2,pos=0;
    unsigned char data;
    do{
        printf("\n\t\t::::::::::Bitwise Function Menu::::::::::\n");
        printf("\t\t1.  Check Number Sign\n");
        printf("\t\t2.  Check the Opposite Sign of Two Number\n");
        printf("\t\t3.  Check The Number is a Power Of 2\n");
        printf("\t\t4.  Set Particular A Bit\n");
        printf("\t\t5.  Clear Particular A Bit\n");
        printf("\t\t6.  Check If A Particular Bit is Set\n");
        printf("\t\t7.  Toggle A Particular Bit\n");
        printf("\t\t8.  Count Set Bits In An Number\n");
        printf("\t\t9.  Clear All Bits From MSB To The ith Bit\n");
        printf("\t\t10. Change Endianness \n");
        printf("\t\t11. EXIT\n");
        printf("\n\t\tEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\n\t\tEnter an Integer Value : ");
                scanf("%d",&value1);
                check_integer_sign(value1);
                break;
            case 2:
                printf("\n\t\tEnter Two Integer Values : ");
                scanf("%d %d",&value1,&value2);
                check_opposite_sign(value1,value2);
                break;
            case 3:
                printf("\n\t\tEnter an Integer Value:");
                scanf("%d",&value1);
                check_power_of_integer(value1);
                break;
            case 4:
                printf("\n\t\tEnter an Integer Value and Position : ");
                scanf("%u %d",&data, &pos);
                bit_set(data,pos);
                break;
            case 5:
                printf("\n\t\tEnter an Integer Value and Position : ");
                scanf("%u %d",&data,&pos);
                clear_bit(data,pos);
                break;
            case 6:
                printf("\n\t\tEnter an Integer Value and Position : ");
                scanf("%u %d",&data,&pos);
                bit_check(data,pos);
                break;
            case 7:
                printf("\n\t\tEnter an Integer Value and Position : ");
                scanf("%u %d",&data, &pos);
                bit_tonggle(data,pos);
                break;
 /*           case 8:
                printf("Enter an Integer Value : ");
                scanf("%d",&value1);
                count_set_bits(value1);
                break;
            case 9:
                printf("Enter an Integer Value : ");
                scanf("%d",&value1);
                chane_endianness(value1);
                break;
            case 10:
                printf("Enter an Integer Value and Position : ");
                scanf("%d %d",&data,&pos);
                clear_bits_from_msb_to_ith(data,pos);
                break;*/
            case 11:
                printf("\n\t\tExiting from Bitwise Function's Menu....\n");
                break;
            default:
                printf("\n\t\tPlease Enter the Correct Choice\n");
                break;
        }
    }while(choice!=11);
    return 0;
}

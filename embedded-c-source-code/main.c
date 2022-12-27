#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"

enum choice {NUMBER_PROGRAM=1, BITWISE_OPERATION, STRING, SINGLE_LINKED_LIST, DOUBLE_LINKED_LIST,\
 STACK, QUEUE, SEARCHING, EXIT};
int main()
{
    int choice;
    while(1)
    {
        printf("\n::::::::::Program Menu::::::::::\n");
        printf("1. Perform Number Programs\n");
        printf("2. Perform Bitwise Programs\n");
        printf("3. Perform String Programs\n");
        printf("4. Perform Single Linked List Programs\n");
        printf("5. Perform Double Linked List Programs\n");
        printf("6. Perform STACK Programs\n");
        printf("7. Perform QUEUE Programs\n");
        printf("8. Perform SEARCHING Programs\n");
        printf("9. Exit\n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case NUMBER_PROGRAM:
                number_func();
                break;
            case BITWISE_OPERATION:
                bitwise_func();
                break;
            case STRING:
                string_func();
                break;
            case SINGLE_LINKED_LIST:
                single_linkedList_func();
                break;
            case DOUBLE_LINKED_LIST:
                double_linkedList_func();
                break;
/*            case STACK:
                stack_func();
                break;
            case QUEUE:
                queue_func();
                break;
  */          case SEARCHING:
                searching_func();
                break;
            case EXIT:
                exit(1);
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
    return 0;
}

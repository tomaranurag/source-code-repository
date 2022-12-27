#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"


int double_linkedList_func()
{
    struct dnode *start=NULL;
    int choice,data,item;
    do
    {
        printf("\n\t\t::::::::::Double Link List Function Menu::::::::::\n");
        printf("\t\t1.  Create List\n");
        printf("\t\t2.  Display\n");
        printf("\t\t3.  Add to empty list\n");
        printf("\t\t4.  Add at beginning\n");
        printf("\t\t5.  Add at end\n");
        printf("\t\t6.  Add before node\n");
        printf("\t\t7.  Add after node\n");
        printf("\t\t8.  Delete\n");
        printf("\t\t9.  Reverse\n");
        printf("\t\t10. Quite\n");

        printf("\t\tEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
              start=create_dlist(start);
            break;
        case 2:
            display_dlist(start);
            break;
        case 3:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            start=add_to_empty_dlist(start,data);
            break;
        case 4:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            start=add_at_beg_dlist(start,data);
            break;
        case 5:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            start=add_at_end_dlist(start,data);
            break;
        case 6:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            printf("\n\t\tEnter the Element before which to inserted : ");
            scanf("%d",&item);
            start=add_before_dlist(start,data,item);
            break;
        case 7:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            printf("\n\t\tEnter the Element After which to inserted : ");
            scanf("%d",&item);
            start=add_after_dlist(start,data,item);
            break;
        case 8:
            printf("\n\t\tEnter the Element to be deleted : ");
            scanf("%d",&data);
            start=del_dlist_node(start,data);
            break;
        case 9:
            start=reverse_dlist(start);
            break;
        case 10:
            printf("\n\t\tExiting from the Single Link List Menu...");
            break;
        default:
            printf("\n\t\tWrong Choice, Please Enter the correct choice\n");
        }
    }while(choice!=10);
    return 0;
}

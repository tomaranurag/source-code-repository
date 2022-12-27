#include<stdio.h>
#include<stdlib.h>
#include"linkedList.h"


int single_linkedList_func()
{
    struct node *start=NULL;
    int choice,data,item,pos;
    do
    {
        printf("\n\t\t::::::::::Single Link List Function Menu::::::::::\n");
        printf("\t\t1.  Create List\n");
        printf("\t\t2.  Display\n");
        printf("\t\t3.  Count\n");
        printf("\t\t4.  Search\n");
        printf("\t\t5.  Add to empty list add at beginning\n");
        printf("\t\t6.  Add at end\n");
        printf("\t\t7.  Add before node\n");
        printf("\t\t8.  Add after node\n");
        printf("\t\t9.  Add at Position\n");
        printf("\t\t10. Delete\n");
        printf("\t\t11. Reverse\n");
        printf("\t\t12. Quite\n");

        printf("\t\tEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
              start=create_list(start);
            break;
        case 2:
            display(start);
            break;
        case 3:
            count(start);
            break;
        case 4:
            printf("\n\t\tEnter the Element to be searched : ");
            scanf("%d",&data);
            search(start,data);
            break;
        case 5:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            start=add_at_beg(start,data);
            break;
        case 6:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            start=add_at_end(start,data);
            break;
        case 7:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            printf("\n\t\tEnter the Element before which to inserted : ");
            scanf("%d",&item);
            start=add_before(start,data,item);
            break;
        case 8:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            printf("\n\t\tEnter the Element After which to inserted : ");
            scanf("%d",&item);
            start=add_after(start,data,item);
            break;
        case 9:
            printf("\n\t\tEnter the Element to be Inserted : ");
            scanf("%d",&data);
            printf("\n\t\tEnter the Position which to inserted : ");
            scanf("%d",&pos);
            start=add_at_pos(start,data,pos);
            break;
        case 10:
            printf("\n\t\tEnter the Element to be deleted : ");
            scanf("%d",&data);
            start=del_node(start,data);
            break;
        case 11:
            start=reverse(start);
            break;
        case 12:
            printf("\n\t\tExiting from the Single Link List Menu...");
            break;
        default:
            printf("\n\t\tWrong Choice, Please Enter the correct choice\n");
        }
    }while(choice!=12);
    return 0;
}

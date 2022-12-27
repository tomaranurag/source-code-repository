#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

void display_dlist(struct dnode *start)
{
    struct dnode *p;
    p=start;

    if (start==NULL)
    {
        printf("\n\t\t List Is Empty ");
        return;
    }

    printf("\n\t\tTh List is : ");
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
    printf("\n");
} /* End Of Display */

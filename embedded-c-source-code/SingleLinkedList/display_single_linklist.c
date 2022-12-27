#include<stdio.h>
#include"linkedList.h"

void display(struct node *start)
{
    struct node *p;
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
        p=p->link;
    }
    printf("\n");
} /* End Of Display */

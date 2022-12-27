#include<stdio.h>
#include"linkedList.h"


struct node *add_before(struct node *start, int data, int item)
{
    struct node *tmp,*p;
    if(start==NULL)
    {
        printf("\n\t\tList is Empty");
        return start;
    }

    /* If data to be inserted before the first node */
    if(item==start->info)
    {
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
    }

    p=start;
    while(p->link!=NULL)
    {
        if(p->link->info==item)
        {
            tmp=(struct node *)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            p->link=tmp;
            return start;
        }
        p=p->link;
    }
    printf("\n\t\t%d not available in List");
    return start;
} /* End of add_before() */

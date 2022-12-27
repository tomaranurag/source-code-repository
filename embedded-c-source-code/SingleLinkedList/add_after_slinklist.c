#include<stdio.h>
#include"linkedList.h"

struct node *add_after(struct node *start, int data, int item)
{
    struct node *tmp,*p;

    p=start;
    while(p!=NULL)
    {
        if(p->info==item)
        {
            p=(struct node *)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            p->link=tmp;
            return start;
        }
        p=p->link;
    }
    printf("\n\t\t%d not available in the list",item);
    return start;
} /* End of add_after() */

#include<stdio.h>
#include"linkedList.h"

struct node *add_at_end(struct node *start, int data)
{
    struct node *p,*tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;

    p=start;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=tmp;
    tmp->link=NULL;

    return start;
} /* End of add_at_end() */

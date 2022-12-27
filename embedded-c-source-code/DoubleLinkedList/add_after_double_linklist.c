#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *add_after_dlist(struct dnode *start,int data,int item)
{
    struct dnode *tmp,*p;

    tmp=(struct dnode *)malloc(sizeof(struct dnode));
    tmp->info=data;

    p=start;
    while(p!=NULL)
    {
        if(p->info==item)
        {
            tmp->next=p->next;
            tmp->prev=p;
            p->next=tmp;
            if(p->next!=NULL)
            {
                p->next->prev=tmp;
            }
            return start;
        }
        p=p->next;
    }
    printf("\n\t\t%d not available in list",item);
    return start;
} /* End of add_after() */

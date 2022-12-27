#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *add_before_dlist(struct dnode *start,int data,int item)
{
    struct dnode *tmp,*p;

    if(start==NULL)
    {
        printf("\n\t\tList is Empty");
        return start;
    }

    if(start->info==item)
    {
        tmp=(struct dnode *)malloc(sizeof(struct dnode ));
        tmp->info=data;
        tmp->next=start;
        tmp->prev=NULL;
        start->prev=tmp;
        start=tmp;
        return start;
    }

    p=start;
    while(p!=NULL)
    {
        if(p->info==item)
        {
            tmp=(struct dnode *)malloc(sizeof(struct dnode ));
            tmp->info=data;
            tmp->next=p;
            tmp->prev=p->prev;
            p->prev->next=tmp;
            p->prev=tmp;
            return start;
        }
        p=p->next;
    }
    printf("\n\t\t%d not available in list",item);
    return start;
}

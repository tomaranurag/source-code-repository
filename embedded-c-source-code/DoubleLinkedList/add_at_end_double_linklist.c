#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *add_at_end_dlist(struct dnode *start,int data)
{
    struct dnode *tmp,*p;

    tmp=(struct dnode *)malloc(sizeof(struct dnode));
    tmp->info=data;
    p=start;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=tmp;
    tmp->next=NULL;
    tmp->prev=p;
    return start;
};

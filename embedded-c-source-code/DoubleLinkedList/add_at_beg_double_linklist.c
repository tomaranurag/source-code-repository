#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *add_at_beg_dlist(struct dnode *start,int data)
{
    struct dnode *tmp;

    tmp=(struct dnode *)malloc(sizeof(struct dnode));
    tmp->info=data;
    tmp->prev=NULL;
    tmp->next=start;
    //start->prev=tmp;
    start=tmp;
    return start;
} /*End of add_at_beg() */

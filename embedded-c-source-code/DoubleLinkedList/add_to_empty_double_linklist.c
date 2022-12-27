#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *add_to_empty_dlist(struct dnode *start,int data)
{
    struct dnode *tmp;

    tmp=(struct dnode *)malloc(sizeof(struct dnode ));

    tmp->info=data;
    tmp->next=NULL;
    tmp->prev=NULL;
    start=tmp;
    return start;
}

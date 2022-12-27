#include<stdio.h>
#include"linkedList.h"

struct node *add_at_beg(struct node *start, int data)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=start;
    start=tmp;
    return start;
} /* End of add_at_beg() */

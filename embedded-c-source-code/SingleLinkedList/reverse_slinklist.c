#include<stdio.h>
#include"linkedList.h"

struct node *reverse(struct node *start)
{
    struct node *prev,*ptr,*next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    start=prev;
    return start;
} /* End of reverse() */

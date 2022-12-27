#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *reverse_dlist(struct dnode *start)
{
    struct dnode *p1,*p2;

    p1=start;
    p2=p1->next;
    p1->next=NULL;
    p1->prev=p2;

    while(p2!=NULL)
    {
        p2->prev=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p2->prev;
    }
    start=p1;
    printf("\n\t\tList Reversed");
    return start;
} /*End of Reverse double Linklist */

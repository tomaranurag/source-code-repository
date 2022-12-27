#include<stdio.h>
#include<stdlib.h>
#include"linkedList.h"

struct node *del_node(struct node *start, int data)
{
    struct node *tmp,*p;

    if(start==NULL)
    {
        printf("\n\t\tList is Empty");
        return start;
    }
    if(start->info==data)
    {
        tmp=start;
        start=NULL;
        free(tmp);
        return start;
    }
    p=start;
    while(p->link!=NULL)
    {
        if(p->link->info==data)
        {
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return start;
        }
        p=p->link;
    }
    printf("\n\t\tElement %d not found",data);
    return start;
} /* End of del_node() */

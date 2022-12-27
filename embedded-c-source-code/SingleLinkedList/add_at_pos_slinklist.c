#include<stdio.h>
#include"linkedList.h"

struct node *add_at_pos(struct node *start,int data,int pos)
{
    struct node *tmp,*p;
    int i;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    if(pos==1)
    {
        tmp->link=start;
        start=tmp;
        return start;
    }
    p=start;
    for(i=1;i<pos-1&&p!=NULL;i++)
    {
        p=p->link;
    }
    if(p!=NULL)
    {
        printf("\n\t\tThere are less than %d Element",pos);
    }
    else
    {
        tmp->link=p->link;
        p->link=tmp;
    }
    return start;
}

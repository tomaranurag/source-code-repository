#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"

struct dnode *del_dlist_node(struct dnode *start,int data)
{
    struct dnode *tmp;
    if(start==NULL)
    {
        printf("\n\t\tList is Empty");
        return start;
    }
    if(start->next==NULL) /* Deletion of only node*/
    {
        if(start->info==data)
        {
            tmp=start;
            start=NULL;
            free(tmp);
            return start;
        }
        else
        {
            printf("\n\t\tElement %d not found",data);
            return start;
        }

    }
    if(start->info==data) /* Deletion of first node*/
        {
            tmp=start;
            start=start->next;
            start->prev=NULL;
            free(tmp);
            return start;
        }
    tmp=start->next; /*Deletion in between node*/
    while(tmp->next!=NULL)
    {
        if(tmp->info==data)
        {
            tmp->prev->next=tmp->next;
            tmp->next->prev=tmp->prev;
            free(tmp);
            return start;
        }
        tmp=tmp->next;
    }
    if(tmp->info==data) /*Deletion of last node*/
    {
        tmp->prev->next=NULL;
        free(tmp);
        return start;
    }
    printf("\n\t\tElement %d not found",data);
    return start;
} /* End of del_node() */

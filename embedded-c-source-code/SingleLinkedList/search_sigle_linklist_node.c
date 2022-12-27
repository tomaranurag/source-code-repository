#include<stdio.h>
#include"linkedList.h"

void search(struct node *start, int data)
{
    struct node *p=start;
    int pos=1;

    while(p!=NULL)
    {
        if(data==p->info)
        {
            printf("\n\t\tData %d found at position %d ",data,pos);
            return;
        }
        p=p->link;
        pos++;
    }
    printf("\n\t\tData %d is not fount in list \n",data);
} /* End of search */

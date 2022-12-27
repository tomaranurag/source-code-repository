#include<stdio.h>
#include"linkedList.h"

void count(struct node *start)
{
    struct node *p;
    int count=0;

    p=start;

    while(p!=NULL)
    {
        p=p->link;
        count++;
    }
    printf("\n\t\tNumber Of Elements are : %d",count);
} /* End Of count()*/

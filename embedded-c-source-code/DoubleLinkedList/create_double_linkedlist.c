#include<stdio.h>
#include<stdlib.h>
#include"double_linkedlist.h"
struct dnode *create_dlist(struct dnode *start)
{
    int i,n,data;
    start=NULL;

    printf("\n\t\tEnter the number of Nodes : ");
    scanf("%d",&n);

    if(n==0)
    {
        return start;
    }

    printf("\n\t\tEnter the Element to be Inserted : ");
    scanf("%d",&data);
    start=add_at_beg_dlist(start,data);
    for(i=2;i<=n;i++)
    {
        printf("\n\t\tEnter the Element to be Inserted : ");
        scanf("%d",&data);
        start=add_at_end_dlist(start,data);
    }
    return start;
} /* End of create_list() */

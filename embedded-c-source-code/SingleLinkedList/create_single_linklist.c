#include<stdio.h>
#include"linkedList.h"
struct node *create_list(struct node *start)
{
    int i,n,data;
    start==NULL;

    printf("\n\t\tEnter the number of Nodes : ");
    scanf("%d",&n);

    if(n==0)
    {
        return start;
    }

    printf("\n\t\tEnter the Element to be Inserted : ");
    scanf("%d",&data);
    start=add_at_beg(start,data);
    for(i=2;i<=n;i++)
    {
        printf("\n\t\tEnter the Element to be Inserted : ");
        scanf("%d",&data);
        start=add_at_end(start,data);
    }
    return start;
} /* End of Single List Create*/

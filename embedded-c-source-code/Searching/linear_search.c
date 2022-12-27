#include<stdio.h>
#include"searching.h"

int linear_search()
{
    int i,n,arr[MAX],item,flag;

    printf("\n\t\tEnter the number of Elements :");
    scanf("%d",&n);
    printf("\n\t\tEnter the Elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\t\tEnter the item to be searched :");
    scanf("%d",&item);

    flag=linearSearch(arr,n,item);
    if(flag==-1)
    {
        printf("\n\t\t%d not found in array", item);
    }
    else
    {
        printf("\n\t\t%d found at position %d\n",item,flag);
    }
    return 0;
}

int linearSearch(int arr[],int n,int item)
{
    int i=0;
    while(i<n && item!=arr[i])
    {
        i++;
    }
    if(i<n)
        return i;
    else
        return -1;
}

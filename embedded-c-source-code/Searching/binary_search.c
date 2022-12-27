#include<stdio.h>
#include"searching.h"

int binary_search()
{
    int i,n,arr[MAX],item,flag;

    printf("\n\t\tEnter the number of Elements :");
    scanf("%d",&n);
    printf("\n\t\tEnter the Elements in shorted order :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\t\tEnter the item to be searched :");
    scanf("%d",&item);

    flag=binarySearch(arr,n,item);
    if(flag==-1)
    {
        printf("\n\t\t%d not found in array", item);
    }
    else
    {
        printf("\n\t\t %d found at position %d\n",item,flag);
    }
    return 0;
}

int binarySearch(int arr[],int n,int item)
{
    int top=n-1,mid,low=0;

    while(low<=top)
    {
        mid=(low+top)/2;
        if(item>arr[mid])
        {
            low=mid+1;
        }
        else if(item<arr[mid])
        {
            top=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

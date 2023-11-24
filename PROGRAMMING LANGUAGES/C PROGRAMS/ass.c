#include<stdio.h>
void insertion_sort(int [],int);
void  main()
{
    int arr[20];
    int n,i;
    printf("enter the size of an array: ");
    scanf("%d",&n);

    
    for(i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    insertion_sort(arr,n);
}
void insertion_sort(int arr[],int n)
{
    int i,j;
    int key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t ",arr[i]);
    }

    
}
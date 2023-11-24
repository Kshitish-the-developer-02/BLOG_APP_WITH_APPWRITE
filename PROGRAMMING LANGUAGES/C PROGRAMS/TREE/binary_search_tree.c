#include<stdio.h>
#include<stdlib.h>
#define N 10

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *root=NULL;
struct tree *curr;

void main()
{
    int arr[N];
    int n;

    printf("enter the size of the array:\n");
    scanf("%d",&n);

    printf("\nenter the values into the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("\nenter a key to search:  ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        curr=(struct tree*)malloc(sizeof(struct tree));
        curr->data=arr[i];
        curr->left=curr->right=NULL;
        insert(root,curr);
    }

}
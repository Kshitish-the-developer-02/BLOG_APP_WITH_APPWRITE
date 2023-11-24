#include <stdio.h>
int main()
{
    int arr[50];
    int num;
    int ptr;
    int key;

    printf("enter size of an array:  ");
    scanf("%d", &num);

    printf("enter the values into the aray:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter a key to search: ");
    scanf("%d", &key);

    BStree_search(arr, ptr, key);
    return 0;
}

int BStree_search(int arr[], int ptr, int key)
{
    ptr=arr[0];

    if(ptr==NULL)
    {
        return ptr;

    }

    if(key==arr[ptr])
}

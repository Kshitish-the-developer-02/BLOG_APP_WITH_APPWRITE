#include <stdio.h>
#define N 50
int binary_search(int arr[], int left, int right, int key);

int main()
{
    int arr[N];
    int n;
    int i;

    printf("enter the size of an array:  ");
    scanf("%d", &n);

    printf("\nenter the values into the array:  \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    int key;
    printf("\nenter a key to serach:  ");
    scanf("%d", &key);

   int  result = binary_search(arr, 0, n-1, key);

    if (result == -1)
    {
        printf("\nelement is not found inside the array");
    }
    else
    {
        printf("\nrequired element is in the array at index number= %d ", result);
    }
}

int binary_search(int arr[], int left, int right, int key)
{
    int l;
    int r;
    l = left;
    r = right;

    int mid = (l + r) / 2;

    if (l > r)
    {
        return -1;
    }
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return binary_search(arr, l, mid - 1, key);
    }
    else
    {
        return binary_search(arr, mid + 1, r, key);
    }

}
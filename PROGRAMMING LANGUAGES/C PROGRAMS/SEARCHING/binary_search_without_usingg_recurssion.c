#include <stdio.h>
#define N 50
int binary_search(int arr[], int n, int key);

int main()
{
    int arr[N];
    int n;
    printf("enter the size of an array:  ");
    scanf("%d", &n);

    printf("\nenter the values into the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\narry is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    int key;
    printf("\nenter a key to search from array:  ");
    scanf("%d", &key);

    int result = binary_search(arr, n, key);

    if (result == -1)
    {
        printf("key is not in the array");
    }
    else
    {
        printf("required key is in the index number= %d ", result);
    }

    return 0;
}

int binary_search(int arr[], int n, int key)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
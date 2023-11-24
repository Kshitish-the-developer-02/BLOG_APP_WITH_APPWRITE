#include <stdio.h>
#define N 100

void quick_sort(int arr[], int p, int r);
int partitioning(int arr[], int p, int r);
int swap(int *a, int *b);

int main()
{
    int arr[N];
    int n;
    int i;
    printf("enter the size of an array:  ");
    scanf("%d", &n);

    printf("\nenter the values into the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    printf("\nSorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void quick_sort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q;
        q = partitioning(arr, p, r);

        quick_sort(arr, p, q - 1);
        quick_sort(arr, q + 1, r);
    }
}

int partitioning(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p - 1;
    int j;

    for (j = p; j <= r - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return temp;
}

#include <stdio.h>
#define N 100
void quick_sort(int arr[], int l, int r);
int partition(int arr[], int l, int r);
int swap(int *a, int *b);

int main()
{
    int arr[N];
    int n;
    int i;

    printf("enter the size of an array:  ");
    scanf("%d", &n);

    printf("\nenter the values into the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nunsorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    printf("\nsorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void quick_sort(int arr[], int l, int r) // l=lower bound of array a[0]
                                         // r=uper bound of array a[n-1]
{
    if (l < r)
    {
        int loc = partition(arr, l, r);
        quick_sort(arr, l, loc - 1);
        quick_sort(arr, loc + 1, r);
    }
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int start = l;
    int end = r;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[l], &arr[end]);
    return end;
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return temp;
}

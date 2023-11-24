#include <stdio.h>
#define N 100
void merge_Sort(int arr[], int l, int r);
void final_merge_with_sorted_array(int arr[], int l, int mid, int r);

int main()
{
    int arr[N];
    int n;
    int i;
    printf("enter the size of the array:  ");
    scanf("%d", &n);

    printf("\nenter the values into the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }

    merge_Sort(arr, 0, n - 1);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void merge_Sort(int arr[], int l, int r)
{
    if (l < r)
    {
        // int m = l + (r - l) / 2;
        int mid = (l + r) / 2;

        merge_Sort(arr, l, mid);
        merge_Sort(arr, mid + 1, r);

        if (arr[mid] > arr[mid + 1])
        {
            final_merge_with_sorted_array(arr, l, mid, r);
        }
    }
}

void final_merge_with_sorted_array(int arr[], int l, int mid, int r)
{
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1];
    int right[n2];

    for (i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

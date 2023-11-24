#include <stdio.h>
#define N 100
int heap_size;

int heap_sort(int arr[], int n);
void build_heap(int arr[], int n);
int heapify(int arr[], int n, int i);
void swap(int *a, int *b);

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

    printf("\nOriginal array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    heap_sort(arr, n);

    printf("\nSorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

int heap_sort(int arr[], int n)
{
    build_heap(arr, n);
    int i;
    int heap_size = n;
    for (i = n - 1; i > 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heap_size = heap_size - 1;
        heapify(arr, n, 0);
    }
    return 0;
}

void build_heap(int arr[], int n)
{
    // int heap_size = n;
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}

int heapify(int arr[], int n, int i)
{
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;
    int heap_size = n - 1;
    int largest;

    if (left <= heap_size && arr[left] > arr[i])
    {
        largest = left;
    }
    else
    {
        largest = i;
    }

    if (right <= heap_size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
#include <stdio.h>
#define N 100
void bubble_sort(int arr[], int n);
void swap(int *p, int *q);
void print_array(int arr[], int n);

void main()
{
    int arr[N];
    int n;
    int i;

    printf("\nenter the size of the array:  ");
    scanf("%d", &n);
    printf("\nenter values into the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\noroginal array is:  ");
    print_array(arr, n);

    bubble_sort(arr, n);
    printf("\nafter sort the array is:  ");
    print_array(arr, n);
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void print_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

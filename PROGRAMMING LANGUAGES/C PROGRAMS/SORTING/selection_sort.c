#include <stdio.h>
void selection_sort(int[], int);
void main()
{
    int arr[20];
    int n, i;
    printf("enter the size of an array:  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("before sore array is: \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    selection_sort(arr, n);
}

void selection_sort(int arr[], int n)
{
    int i, j;
    int min, temp;

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    printf("\n after sort array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

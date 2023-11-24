#include <stdio.h>
#define N 20

void insertion_sort(int arr[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nsorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        }
}

int main()
{
    int arr[N];
    int m;
    int i;
    printf("\nenter the size of an array:  ");
    scanf("%d", &m);

    printf("\nenter the values into the array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nunsorted array is:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d\t", arr[i]);
    }
    insertion_sort(arr, m);
    return 0;
}

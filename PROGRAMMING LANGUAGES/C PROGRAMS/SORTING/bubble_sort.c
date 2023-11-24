#include <stdio.h>
#define N 30

void bubble_sort(int arr[], int n);

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
    bubble_sort(arr, m);

    return 0;
}
void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
              }
        }
    }
    printf("\nsorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
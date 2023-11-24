#include <stdio.h>
void optimized_bubble_sort(int arr[], int n);
int main()
{
    int arr[10];
    int m, i;

    printf("enter the size of an array: ");
    scanf("%d", &m);

    printf("\nenter the values into the  array: \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    optimized_bubble_sort(arr, m);

    printf("sorted array is: \n");
    for (i = 0; i < m; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void optimized_bubble_sort(int arr[], int n)
{
    int i, j;
    int flag;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag++;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

#include <stdio.h>
int main()
{
    int a[20];
    int n, i, key;
    printf("enter the size of an array: ");
    scanf("%d", &n);

    printf("enter the values into the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter a key to search which is present in the array or not:\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\nrequired key is present at index number = %d", i);
            break;
        }
    }
    if (i == n)
    {
        printf("\nkey is not available in the array");
    }
    return 0;
}
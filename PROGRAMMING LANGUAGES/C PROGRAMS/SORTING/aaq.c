#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree rooted at 'rootIndex'
void heapify(int arr[], int size, int rootIndex)
{
    int largest = rootIndex;            // Initialize largest as root
    int leftChild = 2 * rootIndex + 1;  // Left child
    int rightChild = 2 * rootIndex + 2; // Right child

    // If left child is larger than root
    if (leftChild < size && arr[leftChild] > arr[largest])
        largest = leftChild;

    // If right child is larger than largest so far
    if (rightChild < size && arr[rightChild] > arr[largest])
        largest = rightChild;

    // If largest is not root
    if (largest != rootIndex)
    {
        swap(&arr[rootIndex], &arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

// The main function to sort an array of given size using Heap Sort
void heapSort(int arr[], int size)
{
    // Build heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // One by one extract an element from heap
    for (int i = size - 1; i > 0; i--)
    {
        // Move the current root to the end
        swap(&arr[0], &arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// Example usage
int main()
{
    // int arr[] = {12, 11, 13, 5, 6, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int arr[20];
    int size;

    printf("enter the size of ana array: ");
    scanf("%d", &size);

    printf("value enter into the array: \n");
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    // for (i = 0; i < size; i++)
    // {    9
    //     printf("%d\t", arr[i]);
    // }

    printArray(arr, size);

    heapSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}

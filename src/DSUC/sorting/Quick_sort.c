#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j, temp;

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    int pivot_Index;

    if(low < high)
    {
        pivot_Index = partition(arr, low, high);

        quickSort(arr, low, pivot_Index - 1);
        quickSort(arr, pivot_Index + 1, high);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printf("Sorted Array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
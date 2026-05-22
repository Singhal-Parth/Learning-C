#include <stdio.h>


int partition(int arr[] , int low , int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j , temp;

    for(j = low; j < high ; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i+1];
    arr[i++1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void QuickSort(int arr[] , int low , int high)
{
    int pivot_Index;

    if(low < high)
    {
        pivot_Index = partition(arr , low , high);

        quickSort(arr , low , pivot_Index - 1);
        quickSort(arr , pivot_Index + 1 , high)
    }
}

int main()
{

    return 0;
}
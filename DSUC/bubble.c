#include <stdio.h>

void bubblesort(int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, size);
    printf("Sorted array: \n");
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}
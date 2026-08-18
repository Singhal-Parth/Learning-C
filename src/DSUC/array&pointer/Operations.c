#include <stdio.h>

#define MAX 100

void displayArray(int arr[], int size) {
    int i;

    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtEnd(int arr[], int *size, int value) {
    if (*size >= MAX) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }

    arr[*size] = value;
    (*size)++;
    printf("Element %d inserted at the end.\n", value);
}

void insertAtPosition(int arr[], int *size, int position, int value) {
    int i;

    if (*size >= MAX) {
        printf("Array is full. Cannot insert more elements.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position.\n");
        return;
    }

    for (i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    (*size)++;
    printf("Element %d inserted at position %d.\n", value, position);
}

void deleteAtPosition(int arr[], int *size, int position) {
    int i;

    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }

    printf("Deleted element: %d\n", arr[position]);

    for (i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int searchElement(int arr[], int size, int value) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[MAX];
    int size = 0;
    int choice, value, position, index;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size < 0 || size > MAX) {
        printf("Invalid size. Please enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== Array Operations =====\n");
        printf("1. Display array\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete at position\n");
        printf("5. Search element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtEnd(arr, &size, value);
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &position);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtPosition(arr, &size, position, value);
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(arr, &size, position);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &value);
                index = searchElement(arr, size, value);
                if (index != -1) {
                    printf("Element %d found at index %d.\n", value, index);
                } else {
                    printf("Element %d not found in the array.\n", value);
                }
                break;

            case 0:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}


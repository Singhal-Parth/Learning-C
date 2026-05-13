#include <stdio.h>

int main() {
    int myNumbers[] = {1, 3, 5, 12};
    int mynumbers[] = {2, 6, 8};
    int size1 = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int size2 = sizeof(mynumbers) / sizeof(mynumbers[0]);
    int totalSize = size1 + size2;
    int NewNumbers[totalSize] ;

    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (k< totalSize) {
        if (myNumbers[i] < mynumbers[j]) {
            NewNumbers[k++] = myNumbers[i++];
        } else {
            NewNumbers[k++] = mynumbers[j++];
        }
    }



    // Print the merged array
    printf("The merged array in ascending order is: ");
    for (int idx = 0; idx < totalSize; idx++) {
        printf("%d ", NewNumbers[idx]);
    }
    printf("\n");

    return 0;
}

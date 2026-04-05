#include <stdio.h>

int main() {
    int n = 5;
    int i, j, space;

    for (i = 0; i < n; i++) {
        for (space = n - i - 1; space > 0; space--) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
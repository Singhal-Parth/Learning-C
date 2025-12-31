#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("Enter the matrix 1: ");
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("Enter the matrix 2: ");
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            c[row][col] = 0;
            for(int k = 0; k < 3; k++){
                c[row][col] += a[row][k] * b[k][col];
            }
        }
    }

    printf("The multiplied matrix is:\n");
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}

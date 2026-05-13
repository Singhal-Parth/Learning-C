#include<stdio.h>
int main (){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    
    for (int row = 0; row <3 ; row++){
        for(int col = 0; col <3 ; col++){
            printf("Enter the matrix 1: ");
            scanf("%d" , &a[row][col]);
        }
        printf("/n");
    }
    
    for (int row = 0; row <3 ; row++){
        for(int col = 0; col <3 ; col++){
            printf("Enter the matrix 2: ");
            scanf("%d" , &b[row][col]);
        }
        printf("/n");
    }
    
    for(int row = 0; row < 3 ; row++){
        for (int col = 0 ; col < 3 ; col++){
            c[3][3] = a[3][3] + b[3][3];
        }
        printf("The sum of two matrix is : " , c[3][3]);
        printf("/n");
    }
    return 0 ;
}
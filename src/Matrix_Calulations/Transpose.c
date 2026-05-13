#include<stdio.h>
int main (){
    int a[3][3];
    int b[3][3];
    
    for (int row = 0; row <3 ; row++){
        for(int col = 0; col <3 ; col++){
            printf("Enter the matrix 1: ");
            scanf("%d" , &a[row][col]);
        }
        printf("/n");
    }
     
    for (int row = 0 ; row<3 ; row++){
        for (int col = 0 ; col < 3 ; col ++){
            b[col][row] = a[row][col];
            printf("%d " , b[col][row]);

        }
        printf("/n");
    }
    
    
    return 0 ;
}
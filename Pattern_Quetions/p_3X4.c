#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :");
    scanf("%d" , &n);
    

    for(int i = 0 ; i=4 ; i++){
        for(int j = 1 ; j <= n + 1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
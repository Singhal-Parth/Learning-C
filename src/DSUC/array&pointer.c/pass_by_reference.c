#include<stdio.h>

// Function prototype for junk
void junk(int i, int *j);

int main(){
    int i = -5 , j = -2;
    junk(i,&j);
    printf("i = %d , j = %d\n" , i , j ) ;
    return 0;
}

// Function definition for junk
void junk (int i, int *j){
    i = i * i ;
    *j = *j * *j ;
}
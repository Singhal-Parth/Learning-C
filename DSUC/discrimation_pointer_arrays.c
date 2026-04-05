#include<stdio.h>
float calculateSum( int* a, int n ){
    float sum = 0.0 ;
    for ( int i = 0 ; i < n ; i++ ){
        sum += *a++ ;
    }
 return sum ;
}
int main(){
    int a[] = {1,2,3,4,5} ;
    int *j=&a[0];
    int n = sizeof(a) / sizeof(a[0]) ;
    float sum = calculateSum(j,n) ;
    printf("Sum = %.2f\n" , sum ) ;
    return 0 ;
}
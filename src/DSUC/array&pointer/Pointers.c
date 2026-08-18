#include<stdio.h>
int main(){
    int k = 35 , *z , *y ;
    z = &k ;
    y = z ;
        printf("K = %d z = %d y = %d\n" , &k , z , y ) ;

    *z = *y++ ;
    k++ ;
    printf("K = %d z = %d y = %d\n" , k , z , y ) ;
    return 0 ;
}
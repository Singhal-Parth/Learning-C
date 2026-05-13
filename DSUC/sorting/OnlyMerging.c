#include <stdio.h>
 int main(){
// Defining the size of arrays 
     int x , y ;
     printf("Enter the size of array a: ");
     scanf("%d" , &x);
     printf("Enter the size of array b: ");
     scanf("%d" , &y);
// Defing the variables arrays     
     int a[x] ;
     int b[y] ;
     
// Getting the values for array a
    printf("Enter %d elements for array a:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &a[i]);
    }
    
    // Get values for array b
    printf("Enter %d elements for array b:\n", y);
    for (int i = 0; i < y; i++) {
        scanf("%d", &b[i]);
    }
// Defining size of the new array 
     int size3 = x + y;
     printf("The no of terms in array3 is %d:" , size3);

     int c[size3];
// defining 3 variables
     int i =0 ; 
     int j =0 ;
     int k =0 ;

// Using while for alternate no 

     while(i < x && j < y){
         c[k++] = a[i++];
         c[k++] = b[j++];
     }
     
// For printing the reamaing no
     
     while(i < x){
         c[k++] = a[i++];
     }
     
     while(j < y){
         c[k++] = b[j++];
     }
     
// For assigning the value of new array and than printing the array 
     
     printf("The new merged array is :");
    for(int k = 0 ; k < size3 ; k++){
        printf("%d" , c[k]);
    }
    printf("\n");

    return 0 ;
 }
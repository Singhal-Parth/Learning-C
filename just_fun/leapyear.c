#include<stdio.h>
int main (){
    int year ;
    printf("Enter the year : ");
    scanf("%d\n" , &year );
   
    
    if (year % 4 == 0 || year % 400 == 0 ){
        printf("The year is a leap year ");
        
    }
    else{
        printf("The year is not leap year");
    }
    return 0;
}
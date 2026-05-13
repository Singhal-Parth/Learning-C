#include<stdio.h>
int main ()
{
    int rem , num , sum =0 ;
    int d;
    printf("Enter the Number : ");
    scanf("%d" , &num);

    rem = num;

    while (rem != 0)
    {
        d = rem%10 ;
        sum += d ;
        rem = rem/10;
    }
    if (rem % sum == 0){
        printf("The No is a Harshed Number");
    }
    else{
        printf("The No is not Harshed Number");
    }
    return 0;
}
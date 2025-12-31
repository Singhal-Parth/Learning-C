//Q1) finding area of rectangle with pre defined values

/*#include<stdio.h>
int main(){
    int Len = 10;
    int width = 20;
    int area;
     area = Len * width ;
     printf("The area is %d" , area);
    return 0;
}


//Q2) finding the area of retangle by user defined values

#include<stdio.h>
int main(){
    int len , width ,area;

    printf("Enter the length\n");
    scanf("%d" , &len);
    printf("Enter the width\n");
    scanf("%d", &width);
    
    area = len * width;

    printf("The area of rectangle is %d" , area);
    return 0;
}*/


//Q1) find the area of cirle &modify to calculate the volume 
//of cylinder gevien its radius and height 

#include<stdio.h>
int main(){
    int radius , height;
    float area , volume;
    float pi = 3.14;
    printf("The radius of circle is \n");
    scanf("%d" , & radius);
    printf("The height of cylinder is \n");
    scanf("%d" , &height);

    area = pi * radius*radius;
    volume = area * height;
    printf("The area of circle is %f\n", area);
    printf("The volume of cylinder is %f\n", volume);
    return 0;

}


//Q3)program to convert celcius into fernhite

#include<stdio.h>
int main(){
    float Temp_c , Temp_f;
    printf("Enter the temp in celcius\n");
    scanf("%f" , &Temp_c);

    Temp_f = (9/5 * Temp_c) + 32;

    printf("The temp in fernhites is %f\n" , Temp_f);
    return 0;

}

//Q4)program to calculate 

#include <stdio.h>
int main() {
    int Time ;
    char dt = '21 dec 2020';
    float Rate , P_amt , S_I , C_I;

    printf("Enter the time \n");
    scanf("%d" , &Time);

    printf("Enter the rate \n");
    scanf("%f" , Rate);

    printf("Enter the principale amt %f\n");
    scanf("%f" , P_amt);

    S_I = (P_amt * Rate *Time)/100;
    C_I = P_amt * (pow((1+ Rate/100),Time));
    printf("The simple Intrest %F\n", S_I);
    printf("The compaound Interest %f\n", C_I);
    return 0 ;

}

//Q6)Program to check whether a no is divisble by 97 or not 
#include <stdio.h>
int main() {
    int num;
    printf ("Enter the value of num\n");
    scanf("%d", &num);

    if (num % 97 == 0)
    {
        printf("The number is divisible by 97\n");

    }
    else {
        printf("The number is not divisible by 97\n");

    }
    return 0;
}


//Q8) program to 
#include <stdio.h>
int main ()
{
    int Marks ;
    printf("Enter the marks you scored in the exam :");
    scanf("%d" , & Marks);

    switch (Marks)
    {
        case (90...100): 
            printf("You have scored A\n ")
            break;
        case (80...89);
            printf("You have scored B\n");
            break;
        case (70...79);
            printf("You have scored C\n");
            break;
        case (60...69);
            printf("You have scored D\n");
            break;
        case (50...59);
            printf("You have scored E\n");
            break;
        case (0...49);
            printf("You have scored F\n");
            break;
        default:
            printf("Invalid Marks");
            break;
    }
    return 0 ;
}
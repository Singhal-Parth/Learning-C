#include <stdio.h>
int main()
{
    int SUB1 , SUB2 , SUB3 ;
    float Total , perc1 , perc2 , perc3 , T_Perc ;
    printf("Enter the marks of SUB1 :");
    scanf("%d", &SUB1);
    printf("Enter the marks of SUB2 :");
    scanf("%d", &SUB2);
    printf("Enter the marks of SUB3 :");
    scanf("%d", &SUB3);
    printf("Enter the Total marks per subject :");
    scanf("%f", &Total);

    perc1 = (SUB1 / Total) * 100 ;
    perc2 = (SUB2 / Total) * 100 ;
    perc3 = (SUB3 / Total) * 100 ;
    T_Perc = (SUB1 + SUB2 + SUB3) / (3 * Total) * 100 ;
    printf("The marks are %d %d %d\n", SUB1 , SUB2 , SUB3);

    if(T_Perc >= 40)
    {
        printf("Congratulations !!You have passed the exam with %.2f percentage\n" , T_Perc);
    }
    else if (perc1 >= 33 && perc2 >= 33 && perc3 >= 33)
    {
        printf("Congratulations !!You have barely passed the exam with %.2f percentage\n", T_Perc);
    }
    else
    {
        printf("Loser, you have failed the exam with %.2f percentage\n", T_Perc);
    }

    return 0 ;
}

//calculate the income tax paid by an individual
#include<stdio.h>
int main(){
    float Income;
    float PaidTax = 0;

    printf("Provide the income: ");
    scanf("%f", &Income);

    if (Income <= 2.5){
        printf("No Income tax to be paid as salary is less than 2.5 lakhs\n");
    }
    else if (Income > 2.5 && Income <= 5.0){
        printf("The Rate is: 5%%\n");
        PaidTax = (Income - 2.5) * 0.05;
        printf("The income tax paid: %.2f\n", PaidTax);
    }
    else if (Income > 5.0 && Income <= 10.0){
        printf("The Rate is: 20%%\n");
        PaidTax = (2.5 * 0.05) + ((Income - 5.0) * 0.20);
        printf("The income tax paid: %.2f\n", PaidTax);
    }
    else if (Income > 10.0){
        printf("The Rate is: 30%%\n");
        PaidTax = (2.5 * 0.05) + (5.0 * 0.20) + ((Income - 10.0) * 0.30);
        printf("The income tax paid: %.2f\n", PaidTax);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char ** argv){
    float loan, interest, balance, monthly_rate, monthly_payment;
    int number_of_payments, i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter amount of interest: ");
    scanf("%f", &interest);

    monthly_rate = (interest / 100.0f) / 12;
    
    printf("Enter amount of monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &number_of_payments);

    for (i = 1; i <= number_of_payments; i++){
        balance = (loan - monthly_payment) + (loan * monthly_rate);
        printf("Balance remaining after %d payment(s): $%.2f\n", i, balance);
        loan = balance;
    }

    return 0;
}


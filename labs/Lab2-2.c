#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char ** argv){
    float loan, interest, monthly_rate, monthly_payment, first_balance, second_balance, third_balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter amount of interest: ");
    scanf("%f", &interest);

    monthly_rate = (interest / 100.0f) / 12;
    
    printf("Enter amount of monthly payment: ");
    scanf("%f", &monthly_payment);

    first_balance = (loan - monthly_payment) + (loan * monthly_rate);
    second_balance = (first_balance - monthly_payment) + (first_balance * monthly_rate);
    third_balance = (second_balance - monthly_payment) + (second_balance * monthly_rate);

    printf("Balance remaining after first payment: $%.2f\n", first_balance);
    printf("Balance remaining after second payment: $%.2f\n", second_balance);
    printf("Balance remaining after third payment: $%.2f\n", third_balance);

    return 0;
}


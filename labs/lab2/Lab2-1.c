#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){

    // printf("check");    
    int entered_amount = -1;
    printf("Enter a dollar ammount: ");
    scanf("%d", &entered_amount);

    int twenty_bills = (entered_amount/20);
    if (twenty_bills < 1){
        int twenty_bills = 0;
    }

    int ten_bills = ((entered_amount-20*twenty_bills)/10);
    if (ten_bills < 1){
        int ten_bills = 0;
    }

    int five_bills = ((entered_amount-(20*twenty_bills + 10*ten_bills))/5);
    if (five_bills < 1){
        int five_bills = 0;
    }

    int one_bills = (entered_amount-(20*twenty_bills + 10*ten_bills + 5*five_bills));
    if (one_bills < 1){
        int one_bills = 0;
    }

    printf("You will need: \n");
    printf("$20 bills: %d\n", twenty_bills);
    printf("$10 bills: %d\n", ten_bills);
    printf("$5 bills: %d\n", five_bills);
    printf("$1 bills: %d\n", one_bills);

}


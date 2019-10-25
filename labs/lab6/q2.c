/* question #1 from page 256 (#7 in page 34)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pay_amount(int dollars, int *twenty_bills, int *ten_bills, int *five_bills, int *one_bills);

int main(void){
    int twenty_bills, ten_bills, five_bills, one_bills;
    int dollars = 0;
    printf("Enter a dollar ammount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenty_bills, &ten_bills, &five_bills, &one_bills);

    printf("You will need: \n");
    printf("$20 bills: %d\n", twenty_bills);
    printf("$10 bills: %d\n", ten_bills);
    printf("$5 bills: %d\n", five_bills);
    printf("$1 bills: %d\n", one_bills);

}

void pay_amount(int dollars, int *twenty_bills, int *ten_bills, int *five_bills, int *one_bills){
    *twenty_bills = (dollars/20);
    if (*twenty_bills < 1){
        *twenty_bills = 0;
    }

    *ten_bills = ((dollars - 20**twenty_bills)/10);
    if (*ten_bills < 1){
        *ten_bills = 0;
    }

    *five_bills = ((dollars-(20**twenty_bills + 10**ten_bills))/5);
    if (*five_bills < 1){
        *five_bills = 0;
    }

    *one_bills = (dollars-(20**twenty_bills + 10**ten_bills + 5**five_bills));
    if (*one_bills < 1){
        *one_bills = 0;
    }
}
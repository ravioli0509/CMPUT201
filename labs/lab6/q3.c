/* question #3 from page 256 (#3 in page 123)*/
#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int main(void){
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    if (numerator == 0){
        printf("Error!\n");
    }else{
        printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
    }
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int x = numerator;
    int y = denominator;
    int remainder;

    while ( y != 0) {
        remainder =  x % y;
        x = y;
        y = remainder;
    }

    *reduced_numerator = numerator / x;
    *reduced_denominator = denominator / x;
}
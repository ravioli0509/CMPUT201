#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    int numerator, denominator, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int x = numerator;
    int y = denominator;

    while ( y != 0) {
        remainder =  x % y;
        x = y;
        y = remainder;
    }

    numerator /= x;
    denominator /= x;

    if (numerator == 0){
        printf("Error!\n");
    }else{
        printf("In lowest terms: %d/%d\n", numerator, denominator);
    }
    return 0;
}
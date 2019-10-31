/*
    #1 in Page 275-276
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    char message[1000];
    char i, *p = message;

    printf("Enter a message: ");
    while ((i = getchar()) != '\n' && *p < 1000){
        *p++ = i;
    }
    p--; 

    printf("Reversal is: ");

    while (p >= message){
        putchar(*p--);
    }
    printf("\n");
    return 0; 
}

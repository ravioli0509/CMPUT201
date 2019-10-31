/*
    #16 in Page 313
*/
#include <stdio.h>
#include <stdlib.h>
void reverse(char *message);

int main(void){
    char message[1000];
    char i, *mess = message;

    printf("Enter a message: ");
    while ((i = getchar()) != '\n' && *mess < 1000){
        *mess++ = i;
    }
    reverse(message);

    printf("Reversal is: ");
    printf("%s\n", message);
    return 0; 
}

void reverse(char *message){
    char *mess = message, *q = message, temp;

    while (*q){
        q++;
    }
    q--;

    while(p<q){
        temp = *mess;
        *mess = *q;
        *q = temp;
        p++; 
        q--;
    }
}
/*
    #1b in Page 275-276
*/
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char m[MAX];
    char character;
    char *i; 
    int true = 1;

    i = &m[0]; // address for the pointer

    printf("Enter a message: ");
   
    while (true){
        // Accept the each character from the user.
        if ((character = getchar()) != '\n'){
            *i = character;
        }else{ //stops reading if the input is new line
            true = 0;
        }
        i++;
    }
   
    printf("Reversal is: ");
    // Display the message in the reverse order.
    for (--i; i >= &m[0]; --i)
    {
         printf("%c", *i);
    }
    printf("\n");
    return 0;

}
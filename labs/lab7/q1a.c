/*
    #1a in Page 275-276
*/
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char m[MAX];
    char c;
    int i; //creating an index for output array
    printf("Enter a message: ");
    for (i = 0; i<MAX; i++)
    {
         // Accept the each character from the user.
         if ((c = getchar()) != '\n'){
             m[i] = c;
         }else{ //stops reading if the input is new line
            break;
         }
    }
    printf("Reversal is: ");
    // Display the message in the reverse order.
    for (--i; i>=0; --i)
    {
         printf("%c", m[i]);
    }
    printf("\n");
    return 0;

}
/*
    #3 in Page 275-276
*/
#include<stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
    char m[MAX];
    char character;
    int loop = 1;
    int j = 0;

    printf("Enter a message: ");
   
    while (loop){
        // Accept the each character from the user.
        if ((character = getchar()) != '\n'){
            *(m + j) = character;  // j is the counter, as j starts from 0, first character stores in position 0 of *m. Value stored in m + j
            j++;
        }else{ //stops reading if the input is new line
            loop = 0;
        }
    }
   
    printf("Reversal is: ");
    // Display the message in the reverse order.
    for (int i = j; j >= 0; j--)
    {
         printf("%c", *(m+j));
    }
    printf("\n");
    return 0;

}
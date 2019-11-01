/*
    #16 in Page 313
*/
#include <stdio.h>
#define MAX 100

void reverse(char *message);

int main(void) {
    
    char message[MAX];
    char c, *start = message;
    int loop = 1;
    printf("Enter a message: ");

    while (loop)
        if ((c = getchar()) != '\n'){
            *start++ = c; // character starts storing from position 0, increments. 
        }else{
            loop = 0;
        }
            

    reverse(message);
    printf("Reversal is: ");

    printf("%s\n", message);

    return 0;
}    

void reverse(char *message) {

    char *start = message; 
    char *end = message;
    char temp;

    while (*end){
        end++;
    } // we are trying to position the end point (to the end of the array)
    end--;

    while (start < end) {
        // basically we are switching start point and end point using temp as a temporary storage.
        // after switching starting position moves forward, and end position moves backward. 
        temp = *start; 
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
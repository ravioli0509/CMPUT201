#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char ** argv){
    int input;
    
    printf("Enter a two digit number: ");
    scanf("%d", &input);

    printf("The reversal is %d%d\n", (input%10), (input/10)); 
    //input%10 gets the first digit of the input and input/10 gets the second digit of the input

    return 0;
}
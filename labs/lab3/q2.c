#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char ** argv){
    int input;
    int temp;
    
    printf("Enter a three digit number: ");
    scanf("%d", &input);

    temp = input / 100;
    input %= 100;
    printf("The reversal is %d%d%d\n", (input%10), (input/10), temp); 
  
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char ** argv){
    unsigned long input[4];
    int i;
    unsigned long greatest, smallest;
    
    printf("Enter 4 integers: ");
    
    for (i = 0; i < 4; i++){
        scanf("%lu", &input[i]);
    }
    greatest = input[0];
    smallest = input[0];

    for (i = 0; i < 4; i++){
        if (input[i] > greatest){
            greatest = input[i];
        }
        else (input[i] < smallest);{
            smallest = input[i];
        }       
    }
    printf("the greatest: %lu\n", greatest);
    printf("the smallest: %lu\n", smallest);
    

    return 0;
}
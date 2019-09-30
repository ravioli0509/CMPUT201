#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int agrc, char ** argv){
    unsigned long input[4];
    int i;
    unsigned long largest, smallest, small_1, small_2, large_1, large_2;
    
    printf("Enter 4 integers: ");
    
    for (i = 0; i < 4; i++){
        scanf("%lu", &input[i]);
    }

    if (input[0] < input[1]) {
        small_1 = input[0];
        large_1 = input[1];
    } else {
        small_1 = input[1];
        large_1 = input[0];
    }

    if (input[2] < input[3]) {
        small_2 = input[2];
        large_2 = input[3];
    } else {
        small_2 = input[3];
        large_2 = input[2];
    }

    if (large_1 < large_2){
        largest = large_2;
    }else{
        largest = large_1;
    }
    if (small_1 < small_2){
        smallest = small_1;
    }else{
        smallest = small_2;
    }
        
        
    printf("the greatest: %lu\n", largest);
    printf("the smallest: %lu\n", smallest);
    

    return 0;
}
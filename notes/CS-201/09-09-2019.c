#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
    int i = 7;
    unsigned int u = 20;
    unsigned long l = 700000000000;

    printf("a=%d\n*%5d*\n*%-5d*\n*%-5.3d*\n*%u*\n0x%x\n*%ld*\n", i,i,i,i,u,u,l);
    
    float f = 19234.78;
    printf("*%f*\n%.2f\n", f, f);

    /*
    scanf taking two integers for prompts
    */

    // int input;
    // int input2;
    // printf("Enter two integers: ");
    // scanf("%d%d", &input, &input2);
    // printf("Your integers are : %d and %d\n", input, input2);
    // return 0;


    /*
    scanf taking two integers for prompts
    */

    int input = 0;
    int input2 = 0;
    printf("Enter a fraction: ");
    int items_read = scanf("%d/%d", &input, &input2);
    if (items_read != 2) {
        printf("You didn't enter a recognizable fraction!\n");
        exit(1);
    }
    printf("Successfully read %d items\n", items_read);
    printf("You entered: %d and %d\n", input, input2);
    printf("decimal: %f\n", ((float) input)/((float) input2));
    return 0;

}
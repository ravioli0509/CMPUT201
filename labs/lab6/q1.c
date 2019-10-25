#include <stdio.h>
#include <ctype.h> 

#define MAX_DIGITS 10
#define CHAR_HEIGHT 3
#define CHAR_WIDTH 4

/* 7-segment representations for digits 0-9:
 *    _0_
 * 5 |   | 1 
 *   |_6_|
 * 4 |   | 2
 *   |_ _|
 *     3 
 */    
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, //0
                             {0, 1, 1, 0, 0, 0, 0}, //1
                             {1, 1, 0, 1, 1, 0, 1}, //2
                             {1, 1, 1, 1, 0, 0, 1}, //3
                             {0, 1, 1, 0, 0, 1, 1}, //4
                             {1, 0, 1, 1, 0, 1, 1}, //5
                             {1, 0, 1, 1, 1, 1, 1}, //6
                             {1, 1, 1, 0, 0, 0, 0}, //7
                             {1, 1, 1, 1, 1, 1, 1}, //8
                             {1, 1, 1, 1, 0, 1, 1}}; //9
                             
char digits[CHAR_HEIGHT][MAX_DIGITS * CHAR_WIDTH]; //need it to store the | and _ and print it afterwards


void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void) {
    int position = 0;
    char c;
    clear_digits_array();

    printf("Enter a number: ");
    while (((c = getchar()) != '\n') && (position < 40)) {
        if (isdigit(c)) {
            process_digit(c - '0', position); //Calling an integer in the process_digit, so we change it from ascii to integer
            position += CHAR_WIDTH;
        }
    }
    print_digits_array();

    return 0;
}


void clear_digits_array(void) {
    for (int i = 0; i < CHAR_HEIGHT; i++) {
        for (int j = 0; j < MAX_DIGITS * CHAR_WIDTH; j++) {
            digits[i][j] = ' ';
        }
    }
}


/* 7-segment representations for digits 0-9:
 *                                              _a_ (top is 0 for a )
 *                                           f |   | b
 *                  (very right is 0 for f e)  |_g_|
 *                                           e |   | c (very left is 2 for b c)
 *                                             |_ _|
 *                                               d  (bottom is 2 for d)
 *                                         (middle is 1 for a g d)
 *                                   
 *  this is a map to guide the bottom function 
 */ 

void process_digit(int digit, int position) {
   for (int i = 0; i < 7; i++) {
        if (segments[digit][0] == 1){
            digits[0][position + 1] = '_'; // adds _ on point a 
        }
        
        if (segments[digit][1] == 1){
            digits[1][position + 2] = '|'; // adds | on point b
        }
        
        if (segments[digit][2] == 1){
            digits[2][position + 2] = '|'; // adds | on point c
        }
        
        if (segments[digit][3] == 1){
            digits[2][position + 1] = '_'; // adds _ on point d
        }
        
        if (segments[digit][4] == 1){
            digits[2][position] = '|'; // adds | on point e
        }
        
        if (segments[digit][5] == 1){
            digits[1][position] = '|'; // adds | on point f
        }
        
        if (segments[digit][6] == 1){
            digits[1][position + 1] = '_'; // adds | on point g
        }
    }
}

void print_digits_array(void) {
    for (int i = 0; i < CHAR_HEIGHT; i++) {
        for (int j = 0; j < MAX_DIGITS * CHAR_WIDTH; j++)
            putchar(digits[i][j]);
        printf("\n");
    }
}
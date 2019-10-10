#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h> 

bool play(void);
int roll_dice(void);

int main(void) {

    int wins = 0;
    int losses = 0;
    char prompt;
    int prompt_check = 1;

    srand((unsigned) time(NULL)); 
    /* make sure the dice always dont end up 4 every time the 
       program starts
    */ 
    
    while(prompt_check) {

        if (play())
            wins++; // wins add up if the play game is true (which means the players win)
        else
            losses++; // losses add up if its false
        
        printf("Play again? ");
        scanf(" %c", &prompt);
        if (prompt == 'n' || prompt == 'N')
            prompt_check = 0;
        else
            continue;
        
        printf("\n");
    }

    printf("\nWins: %2d  Losses: %2d\n", wins, losses);

    return 0;
}

bool play(void) {
    int point;
    int dice = roll_dice();

    printf("You rolled: %d\n", dice);


    if (dice == 2 || dice == 3 || dice == 12){
        printf("You Lose!\n\n");
        return false; // returns false if dice (d1 + d2) is 2, 3, or 12
    }
    else if (dice == 7 || dice == 11) {
        printf("You win!\n\n");
        return true; // returns true if dice (d1 + d2) is 7 or 11
    }else{
        point = dice; // assigns points using the dice
        printf("Your point is %d\n", point);
    }


    while ((dice = roll_dice())) { // while loop goes on forever with the dice
        printf("You rolled: %d\n", dice);

        if (dice == point) {
            printf("You win!\n\n");
            return true; // returns true if the player gets same as point 
        }
        if (dice == 7) {
            printf("You lose!\n\n");
            return false; // returns false if its 7
        }
    }
 }

int roll_dice(void) {
     int d1 = rand() % 6 + 1; // 1st dice
     int d2 = rand() % 6 + 1; // 2nd dice
     return d1 + d2; // return the total
 } 
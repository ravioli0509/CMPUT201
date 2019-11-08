/*
https://overiq.com/c-programming-101/the-strcmp-function-in-c/ is a reference for strcmp function used for string comparison
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *word[30]; //array pointer 
int num_words = 0; 

int read_line();

int main(void)
{
    int small, i, j;
    char *temp; // temp variable pointer

    for (i = 0; ; i++)
    {
        printf("Enter a word: ");
        if (read_line() == 0)
            break;
    }

    /* sorting... */
    for (i = 0; i < num_words; i++){
        small = i;
        for (j = i+1; j < num_words; j++) // refer above for the reference. 
            if (strcmp(word[j], word[small]) < 0){
                small = j;
            }else{
                continue;
            } 
            //compares two words, if bar comes first then the word such as car will be the smallest
        temp = word[i];
        word[i] = word[small];
        word[small] = temp;
    } // smallest one will be the last word

    printf("In sorted order: ");
    for (i = 0; i < num_words; i++){
        printf("%s%s", word[i], i == num_words ? "" : " ");
    }
    printf("\n");

    return 0;
}

int read_line(char str[], int n)
{
    word[num_words] = malloc(20 + 1);  //setting the array size for words to store using malloc with the size of 20
    int input, i = 0;

    while ((input = getchar()) != '\n')
        if (i < n){
            word[num_words][i++] = input;  //allows to user enter more than 1 word by using 2D array      
        }
        else{
            break;
        }
    word[num_words][i] = '\0';
    num_words++; //increasing the counter for counting words 
    return i;
}
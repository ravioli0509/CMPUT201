#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int prompt(int argc, char ** argv){
   



    

//     return 0;
// }

// int longestcommonsequence(int s1[], int s2[], int m, int n){

// }

int main(int argc, char ** argv){
    char s1[1001];
    char s2[1001];
    printf("To compute an LCS,\n");
    printf("Enter the first sequence: ");
    scanf("%s", &s1[1001]);
   
    printf("Enter the second sequence: ");
    scanf("%s", &s2[1001]);

    // if (scanf("%d", &s1[1001]) == 0){
    //     printf("Error\n");
    //     return 0;
    // }

    // if (scanf("%d", &s2[1001]) == 0){
    //     printf("Error\n");
    //     return 0;
    // }

    printf("%s\n", s2);
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    printf("%d, first, %d", s1_length, s2_length);
    int s1_idx = 0;
    int repeats = 0;

    for (int i = 0; i < s2_length; i++) {
        if (s2[i] == s1[s1_idx]) {
            s1_idx++;
        }   
        
        else {s1_idx = 0;}

        if (s1_idx > s1_length-1) {
            s1_idx = 0;
            repeats++;
        }
    }

    printf("complete");
    printf("\n%d and %d\n", s1[1000], s2[1000]);
    printf("%d and %d\n", s1_length, s2_length);
    printf("repats are : %d", repeats);
    return 0;
}


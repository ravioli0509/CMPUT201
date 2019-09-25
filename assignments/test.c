#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int prompt(int argc, char ** argv){
   

//     return 0;
// }

// int longestcommonsequence(int s1[], int s2[], int m, int n){

// }

int main(int argc, char ** argv){
    int s1[1001] = {-1};
    int s2[1001] = {-1};
    int s1_length = -1;
    int s2_length = -1;
    int num_truth = 0



    while (num_truth == 0);
        printf("To compute an LCS,\n");
        printf("Enter the first sequence: ");
        scanf("%d", &s1[1000]);
    
        printf("Enter the second sequence: ");
        scanf("%d", &s2[1000]);

        if (scanf("%d", &s1[1000]) || scanf("%d", &s2[1000]) == 0){
            printf("Error\n");
            return 0;
        }
        

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

    s1_length = sizeof(s1[1000]);
    s2_length = sizeof(s2[1000]);
    printf("\n%d and %d\n", s1[1000], s2[1000]);
    printf("%d and %d\n", s1_length, s2_length);
    printf("repats are : %d", repeats);
    return 0;
}


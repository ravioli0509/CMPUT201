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
    printf("To compute an LCS,\n");
    printf("Enter the first sequence: ");
    scanf("%d", &s1[]);
    printf("Enter the second sequence: ");
    scanf("%d", &s2[]);

    int s1_length = sizeof(s1)/sizeof(int);
    int s2_length = sizeof(s2)/sizeof(int);

    printf("%d and %d\n", s1[1001], s2[1001]);
    printf("%d and %d\n", s1_length, s2_length);

}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int LongestCommonSequence(char s1[], char s2[], int m, int n){
    if (m == -1){
        return 0;
    }
    if (n == -1){
        return 0;
    }
    int a = LongestCommonSequence(s1, s2, m-1, n);
    int b = LongestCommonSequence(s1, s2, m, n-1);
    int c = LongestCommonSequence(s1, s2, m-1, n-1);
    if (s1[m-1] == s2[n-1]){
        c++;
    }
    if ( a >= b && a >= c){
        return a;
    }
    if ( b >= a && b >= c){
        return b;
    }
    if (c >= a && c >= b){
        return c;
    }
    printf("Error!\n");

}

int main(int argc, char ** argv) {
    char s1[1001] = 
    "";
    char s2[1001] = 
    "";
    int m = strlen(s1);
    int n = strlen(s2);
    int length = LongestCommonSequence(s1, s2, m, n);
    printf("LCS length: %d\n", length);


    return 0;
}


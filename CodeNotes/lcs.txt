#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int LongestCommonSequence(char s1[], char s2[], int m, int n){
    int lcs_calls = 0;
    printf("calls: %d\n", lcs_calls++);
    if (m == -1){
        return 0;
    }
    if (n == -1){
        return 0;
    }
    int a = LongestCommonSequence(s1, s2, m-1, n);
    int b = LongestCommonSequence(s1, s2, m, n-1);
    int c = LongestCommonSequence(s1, s2, m-1, n-1);
    if (s1[m] == s2[n]){
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
    printf("Error!");

}

int main(int argc, char ** argv) {
    char s1[1001] = 
    "adfasdfasdfadfsdafasdfasfas";
    char s2[1001] = 
    "adfasdfasdfadfsdafasdfasfas";
    int m = strlen(s1);
    int n = strlen(s2);
    int length = LongestCommonSequence(s1, s2, m-1, n-1);
    printf("LCS length: %d\n", length);


    return 0;

    /*
    We need to check 
    example 
    adfasdf
    asfasdf


    3 cases:
    adfasd vs asfasdf (removed 1 letter from first string)
    adfasdf vs asfasd (removed 1 letter from second string)
    adfasd vs adfasd (removed 1 letter from both) + 1 if the letters i removed were the same

    remove the last string

    lcs(m, n)
        if m or n is 0;
            return 0

        return max of 
            lcs(m-1, n)
            lcs(m, n-1)
            lcs(m-1, n-1) + 1 string1
            character m and string2 
            character n are the same

    */
}
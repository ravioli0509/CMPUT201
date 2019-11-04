/**
* This is assignment 2, finding the LTS and LPS of two sequences. 
* Algorithm in function LCS and finding max was referenced on https://www.dyclassroom.com/dynamic-programming/longest-common-subsequence
* Henceforth I credit this website for the use of dynamic programming in fucntion LCS.
* student ID: 1553439 CCID: nawalage
* No collaborators
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int FindMaxFromTable(int a, int b);
void LPS(char pali[], char reverse_s2[], int n, int t);
void LTS(char s1[], int m);
void LCSforLTS(char h1[], char h2[], int e, int f);

int FindMaxFromTable(int a, int b) {
  return (a > b)? a : b;
}


//Reversed seqeunce put into LCS for computation
void LPS(char pali[], char reverse_s2[], int n, int t) {
  int L[n + 1][t + 1];
  int s2_num, Ts2_num, len_of_LCS;
  int lcs_calls = 0;
    for(s2_num = 0; s2_num <= n ; s2_num++) {

        for(Ts2_num = 0; Ts2_num <= t; Ts2_num++) {
        int g = s2_num - 1;
        int h = Ts2_num - 1;
        if(s2_num == 0 || Ts2_num == 0) 
        {

            L[s2_num][Ts2_num] = 0;

        } else if(pali[g] == reverse_s2[h]) { 

            L[s2_num][Ts2_num] = L[g][h] + 1;

        } else { 

            L[s2_num][Ts2_num] = FindMaxFromTable(L[g][Ts2_num], L[s2_num][h]);
        }
        }
        lcs_calls = lcs_calls + 1;
    }
    s2_num = n;
    Ts2_num = t;
    len_of_LCS = L[s2_num][Ts2_num];
    char LCS[len_of_LCS+1];
    LCS[len_of_LCS] = '\0'; // we set null character at the end of string, to show the end of array

    while(s2_num > 0 && Ts2_num > 0) {

        if(pali[s2_num - 1] == reverse_s2[Ts2_num - 1]) { 

        LCS[len_of_LCS - 1] = pali[s2_num - 1];

        len_of_LCS = len_of_LCS - 1;
        s2_num = s2_num - 1;
        Ts2_num = Ts2_num - 1;

        } else if(L[s2_num - 1][Ts2_num] > L[s2_num][Ts2_num - 1]) { 

        s2_num = s2_num - 1;

        } else {

        Ts2_num = Ts2_num - 1;

        }
    }
        printf("# an LPS (length = %d) for the second seqeuence is:\n", L[n][t]);
        printf("%s\n", LCS);
        printf("lcs calls: %d\n", lcs_calls);

    }

// spliting the squence in half to find LTS
void LTS(char s1[], int m) {
    int e = 0, f = 0;
    char h1[10001];
    char h2[10001];
    int index = 0;

    for (int a = 0; a < m/2; a++){
        h1[a] = s1[a]; 
    }
    for (int b = m/2; b <= m; b++){
        h2[index] = s1[b];
        index++;
    }

    e = strlen(h1);
    f = strlen(h2);
    

    LCSforLTS(h1, h2, e, f);
}

//LCS computation for LTS
void LCSforLTS(char h1[], char h2[], int e, int f){

    int L[e + 1][f + 1];
    int h1_num, h2_num, len_of_LCS;
    int lcs_calls = 0;


    for(h1_num = 0; h1_num <= e ; h1_num++) {

        for(h2_num = 0; h2_num <= f; h2_num++) {
        int g = h1_num - 1;
        int h = h2_num - 1;
        if(h1_num == 0 || h2_num == 0) 
        {

            L[h1_num][h2_num] = 0;

        } else if(h1[g] == h2[h]) { 

            L[h1_num][h2_num] = L[g][h] + 1;

        } else { 

            L[h1_num][h2_num] = FindMaxFromTable(L[g][h2_num], L[h1_num][h]);
        }
        }
        lcs_calls = lcs_calls + 1;
    }

    h1_num = e;
    h2_num = f;
    len_of_LCS = L[h1_num][h2_num];
    char LCS[len_of_LCS+1];
    LCS[len_of_LCS] = '\0'; // we set null character at the end of string, to show the end of array

    while(h1_num > 0 && h2_num > 0) {

        if(h1[h1_num - 1] == h2[h2_num - 1]) {

        LCS[len_of_LCS - 1] = h1[h1_num - 1];

        len_of_LCS = len_of_LCS - 1;
        h1_num = h1_num - 1;
        h2_num = h2_num - 1;

        } else if(L[h1_num - 1][h2_num] > L[h1_num][h2_num - 1]) {

        h1_num = h1_num - 1;

        } else {

        h2_num = h2_num - 1;

        }
    }

    printf("# an LTS (length = %d) for the second seqeuence is:\n", L[e][f]);
    printf("%s\n", LCS);
    printf("lcs calls: %d\n", lcs_calls);
 
    }


int main(void) {
    char s1[10002], s2[10002], reverse_s2[10002], pali[10002];
    int a = 0, b = 0;
    s1[a] = '\0'; // we set null character at the end of string, to show the end of array
    s2[b] = '\0'; // same as above
    int n=0,i=0, j=0, num=0, c=0, d=0, t=0, m=0;

    while (num == 0){
        int error_s1 = 0;
        int error_s2 = 0;
        printf("To Compute LTS and LPS enter two sequences\n");

        printf("Enter the first sequence: ");
        fgets(s1,10002, stdin);        
        for (i = 0; i < strlen(s1)-1; i++){
            if (isdigit(s1[i]) == 0){ //use of isdigit
                error_s1 = 1;
                break;
            }else{
                error_s1 = 0;
            }
        }
        if (error_s1 == 1){ // prints error message if error = 1
            printf("\nError! Non-digit character detected!\n\n");
            continue;
        }    
        
        printf("Enter the second sequence: ");
        fgets(s2,10002,stdin);   

        for (j = 0; j < strlen(s2)-1; j++){
            if (isdigit(s2[j]) == 0){
                error_s2 = 1;
                break;
            }else{
                error_s2 = 0;
            }
        }
        if (error_s2 == 1){
            printf("\nError! Non-digit character detected!\n\n");
            continue;
        }  

        if (error_s1 == 0 && error_s2 == 0){ //breaks out of while loop if error = 0
            num = 1;
        }else{
            num = 0;
            continue;
        }      
    }

    
    n = strlen(s2);
    m = strlen(s1);

    for (c = n - 1, d = 0; c >= 0; c--, d++) //reversing the 2nd sequence 
      reverse_s2[d] = s2[c];
    for (c = 0; c < n; c++)   // storing teh reversed elements into a new array
      pali[c] = s2[c]; 
    t = strlen(reverse_s2);

    LTS(s1, m);
    LPS(pali, reverse_s2, n, t);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int LCS(char s1[], char s2[], int m, int n){
    int result[m+1][n+1];

    int i, j, k;

    for (i = 0; i <= m; i++){
        for (j = 0; j <= n; j++){
            if (m == 0){
                result[m][n] = 0;
            }
            if (n == 0){
                result[m][n] = 0;
            }else if(s1[m-1] == s2[n-1]){
                result[m][n] = result[m-1][n-1];
            }else{
                result[m][n] = max(result[m-1][n], result[m][n-1]);
            }
        }
    }
      
    i = result[m][n];

    char LCS[i+1];

    while ( m > 0){
        while (n > 0){
            if (s1[m-1] == s2[n-1]){
                LCS[i-1] = s1[m-1];
                i = i - 1;
                m = m - 1;
                n = n - 1;
            }else if (result[m-1][n] > result[m][n-1]){
                m = m - 1;
            }else{
                n = n - 1;
            }
        }
    }

    printf("%d\n", result[m][n]);
    printf("LCS: %s", LCS);

}
//     if (m == 0 || n == 0) 
//      return 0; 
//    if (s1[m-1] == s2[n-1]) 
//      return 1 + LCS(s1, s2, m-1, n-1); 
//    else
//      return max(LCS(s1, s2, m, n-1), LCS(s1, s2, m-1, n)); 



/* Utility function to get max of 2 integers */
int max(int a, int b) 
{ 
    return (a > b)? a : b; 
} 

int main(int argc, char ** argv){
    char s1[1001], s2[1001];
    int a, b;
    s1[a] = '\0';
    s2[b] = '\0';
    int n=0, m=0, i=0, j=0, error_s1= 0, error_s2=0, num=0;
     while (num == 0){
        printf("To Compute LCS enter two sequences\n");
        printf("Enter the first sequence: ");
        fgets(s1,1001, stdin);        
        for (i = 0; i < strlen(s1)-1; i++){
            if (isdigit(s1[i]) == 0){
                error_s1 = 1;
                break;
            }else{
                error_s1 = 0;
            }
        }
        if (error_s1 == 1){
            printf("\nError! Non-digit character detected!\n\n");
            num = 0;
            continue;
        }
        printf("Enter the second sequence: ");
        fgets(s2,1001,stdin);   

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
            num = 0;
            continue;
        }
        num = 1;
    }
    m = strlen(s1);
    n = strlen(s2);
    printf("\n# Two input sequences (length = %d, %d) are:\n", m-1, n-1);
    printf("%s", s1);
    printf("%s", s2);   

    LCS(s1, s2, m, n);
  
    // printf("%d and %d",m ,n);
    // printf("%d", LCS(s1, s2, m, n)); 
    

    return 0;
}


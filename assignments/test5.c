#include<stdio.h>
#include<string.h>
#include<ctype.h>

int FindMAX(int a, int b);
void LCS(char s1[], char s2[], int m, int n);

int FindMAX(int a, int b) {
  return (a > b)? a : b;
}

void LCS(char s1[], char s2[], int m, int n) {
  int L[m + 1][n + 1];
  int s1_num, s2_num, result;
  int lcs_calls = 0;
 for(s1_num = 0; s1_num <= m ; s1_num++) {

    for(s2_num = 0; s2_num <= n; s2_num++) {
      int g = s1_num - 1;
      int h = s2_num - 1;
      if(s1_num == 0 || s2_num == 0) {

        L[s1_num][s2_num] = 0;

      } else if(s1[g] == s2[h]) {

        L[s1_num][s2_num] = L[g][h] + 1;

      } else {

        L[s1_num][s2_num] = FindMAX(L[g][s2_num], L[s1_num][h]);
      }
      lcs_calls = lcs_calls + 1;
    }
  }
  s1_num = m;
  s2_num = n;
  result = L[s1_num][s2_num];
  char LCS[result+1];
  LCS[result] = '\0';

  while(s1_num > 0 && s2_num > 0) {

    if(s1[s1_num - 1] == s2[s2_num - 1]) {

      LCS[result - 1] = s1[s1_num - 1];

      result = result - 1;
      s1_num = s1_num - 1;
      s2_num = s2_num - 1;

    } else if(L[s1_num - 1][s2_num] > L[s1_num][s2_num - 1]) {

      s1_num = s1_num - 1;

    } else {

      s2_num = s2_num - 1;

    }
  }
  if (L[m][n]-1 == 0 ){
    printf("# an LCS (length = %d) is:\n", L[m][n]-1);
    printf("\nTotal LCS calls is 0, because of existing empty sequence(s)!\n");
  } else {
    printf("# an LCS (length = %d) is:\n", L[m][n]-1);
    printf("%s\n", LCS);
    printf("Total LCS calls: %d\n", lcs_calls);
  }
}

int main(void) {
    char s1[1002], s2[1002];
    int a = 0, b = 0;
    s1[a] = '\0';
    s2[b] = '\0';
    int n=0, m=0, i=0, j=0, num=0;

    while (num == 0){
        int error_s1 = 0;
        int error_s2 = 0;
        printf("To Compute LCS enter two sequences\n");

        printf("Enter the first sequence: ");
        fgets(s1,1002, stdin);        
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
            continue;
        }    
        
        printf("Enter the second sequence: ");
        fgets(s2,1002,stdin);   

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

        if (error_s1 == 0 && error_s2 == 0){
            num = 1;
        }else{
            num = 0;
            continue;
        }      
    }

    m = strlen(s1);
    n = strlen(s2);
    printf("\n# Two input sequences (length = %d, %d) are:\n", m-1, n-1);
    printf("%s", s1);
    printf("%s\n", s2);   
    LCS(s1, s2, m, n);

  return 0;
}
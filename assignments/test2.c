#include<stdio.h>
#include<string.h>
#include<ctype.h>

int max(int a, int b);
void findLCS(char *s1, char *s2, int m, int n);

int max(int a, int b) {
  return (a > b)? a : b;
}

void findLCS(char *s1, char *s2, int m, int n) {
  int L[m + 1][n + 1];
  int s1_num, s2_num, result;

 for(s1_num = 0; s1_num <= m ; s1_num++) {

    for(s2_num = 0; s2_num <= n; s2_num++) {

      if(s1_num == 0 || s2_num == 0) {

        L[s1_num][s2_num] = 0;

      } else if(s1[s1_num - 1] == s2[s2_num - 1]) {

        L[s1_num][s2_num] = L[s1_num - 1][s2_num - 1] + 1;

      } else {

        L[s1_num][s2_num] = max(L[s1_num - 1][s2_num], L[s1_num][s2_num - 1]);
      }
    }
  }

  /*
   * Print LCS
   */
  s1_num = m;
  s2_num = n;
  result = L[s1_num][s2_num];

  char LCS[result+1];

  /*
   * setting the NULL character at the end of LCS character array.
   * as we know in C programming language, NULL character is used
   * to denote the end of a string
   */
  LCS[result] = '\0';

  while(s1_num > 0 && s2_num > 0) {

    if(s1[s1_num - 1] == s2[s2_num - 1]) {

      LCS[result - 1] = s1[s1_num - 1];

      result--;
      s1_num--;
      s2_num--;

    } else if(L[s1_num - 1][s2_num] > L[s1_num][s2_num - 1]) {

      s1_num--;

    } else {

      s2_num--;

    }

  }

  //print result
  printf("Length of the LCS: %d\n", L[m][n]-1);
  printf("LCS: %s\n", LCS);
}

int main(void) {
    char s1[1001], s2[1001];
    int a = 0, b = 0;
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
        }else{
            num = 1;
        }
        
    }
    m = strlen(s1);
    n = strlen(s2);
    printf("\n# Two input sequences (length = %d, %d) are:\n", m-1, n-1);
    printf("%s", s1);
    printf("%s", s2);   
    findLCS(s1, s2, m, n);

  return 0;
}
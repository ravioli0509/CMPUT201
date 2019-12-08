#include <stdio.h>
int countDigit(int n);
int count = 0;
int main(){
    char *LPSarray;
    int len;
    LPSarray = malloc(10000 * sizeof(int));
    countDigit(&LPSarray);
    printf("Enter the sequence");
    scanf("%d", LPSarray);
    // len = strlen(LPSarray);
    // LPS(&LPSarray, len);
    printf("%d", count);
}

int countDigit{
    while (n != 0){
        n = n/10;
        ++count;
    }
    return count;
}
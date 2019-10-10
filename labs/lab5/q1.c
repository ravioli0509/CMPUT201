#include <stdio.h>
#include <stdlib.h>


void pb(int n);

int main(int agrc, char ** argv){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The binary format is: ");
    pb(n);
    printf("\n");
    
    return 0;
}


void pb(int n) {
    if (n != 0){
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
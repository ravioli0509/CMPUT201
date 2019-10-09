#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    int s1, s2;
    printf("Enter two integers: ");
    scanf("%d%d", &s1, &s2);

    while ( s2 != 0 ){
        int remainder = s1 % s2;
        s1 = s2;
        s2 = remainder; 
    }

    printf("Greatest common divisor %d\n", s1);
}
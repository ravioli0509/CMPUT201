#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    
    int a = 10;
    long b = 5;
    printf("%ld\n", a + b);
    /*
    because we are adding two differnt types,
    first C will conver a to a long
    then it will add, the result will be a long.
    {implicit type conversion}
    */

    int c = 10;
    int d = 5;
    int e = 2;
    printf("%d\n", c + d * e); // multiplication is performed before addition

    
    return 0;
}
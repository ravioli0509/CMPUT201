// this is a comment 
/* 
    This is also a comment 
*/

#include <stdio.h>

int foo(int x)
{
    return x+1;
}

int main()                      // just like python, C programs start from here
{
    int i = 0;                  // where we define variables 
    while (i < 10){
        i = i + 1;
        printf("%d ", foo(i));
    }
    if (i >= 10)
        i = 1;
    else         
        i = 0;
    return i;
    
}
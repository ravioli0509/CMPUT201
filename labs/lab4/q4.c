#include <stdio.h>
 
int main(int argc, char ** argv)
{
    int n, c;
    // unsigned int mantissa : 23; 
    // unsigned int exponent : 8; 
    // unsigned int sign : 1; 
 
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\nThe machine format is : ");

    for (c = 31; c >= 0; c--)
    {
    if ((n >> c) & 1) 
    // left shit operated, n as in the user inputs gets shifted to right, 
    // and c which is number bits decides number of places to shift the bits.
    // & 1 
        printf("1");
    else
        printf("0");
    }

    printf("\n");
    float a;
    int sign;
    unsigned int exponent;
    unsigned int mantissa; 


    printf("Enter a positive floating integer: ");
    scanf("%f", &sign);

    if (sign > 0){
        sign = 0;
    }else{
        sign = 1;
    }

    a = sign
    int q = (int)a;

    float decimal = a - q;
    
}
#include <stdio.h>
void create_magic_squares(int n, int square[n][n]);
void print_magic_squares(int n, int square[n][n]);

int main(void) {
    int n;
    int check_even = 1;

    while (check_even){
        printf("This program creates a magic square of a specified size.\n");
        printf("The size must be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &n);
        if (n % 2 == 0){
            printf("Even number won't work\n\n");
        }else{
            check_even = 0;
            continue;
        }
    }

    int square[n][n];

    create_magic_squares(n, square);
    print_magic_squares(n, square);
    
    return 0;
}



void create_magic_squares(int n, int square[n][n]){
    int sqr = n * n;
    int row = 0, column = n / 2, k;
 
    for (k = 1; k <= sqr; ++k) //Using for loop arrange the numbers from 1 to n^2 in an [n x n] matrix. 
    {
        square[row][column] = k;
        row--;
        column++;
 
        if (k % n == 0) // If else condition statement is used to check that each number is occurring exactly once.
        { 
            row += 2; 
            --column; 
        }
        else // Hence the sum of the entries of any row, any column, or any main diagonal is the same. 
        {
            if (column == n) 
            {
                column -= n;
            }
            else if (row < 0)
            {
                row += n;
            }
        }
    }
}

void print_magic_squares(int n, int square[n][n]){
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            printf("%4d", square[row][column]);
        }
        printf("\n");
    }
}
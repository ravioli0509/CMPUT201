#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char ** argv){
    
    int num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9, num_10, num_11, num_12, num_13, num_14, num_15, num_16;
    int column_1, column_2, column_3, column_4;
    int row_1, row_2, row_3, row_4;
    int diag_1, diag_2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5, &num_6, &num_7, &num_8, &num_9, &num_10, &num_11, &num_12, &num_13, &num_14, &num_15, &num_16);

    row_1 = num_1 + num_2 + num_3 + num_4;
    row_2 = num_5 + num_6 + num_7 + num_8;
    row_3 = num_9 + num_10 + num_11 + num_12;
    row_4 = num_13 + num_14 + num_15 + num_16;

    column_1 = num_1 + num_5 + num_9 + num_13;
    column_2 = num_2 + num_6 + num_10 + num_14;
    column_3 = num_3 + num_7 + num_11 + num_15;
    column_4 = num_4 + num_8 + num_12 + num_16;

    diag_1 = num_1 + num_6 + num_11 + num_16;
    diag_2 = num_13 + num_10 + num_7 + num_4;

    printf("\n%2d %2d %2d %2d\n", num_1, num_2, num_3, num_4);
    printf("%2d %2d %2d %2d\n", num_5, num_6, num_7, num_8);
    printf("%2d %2d %2d %2d\n", num_9, num_10, num_11, num_12);
    printf("%2d %2d %2d %2d\n", num_13, num_14, num_15, num_16);

    printf("\nRow sums: %2d %2d %2d %2d\n", row_1, row_2, row_3, row_4);
    printf("Column sums: %2d %2d %2d %2d\n", column_1, column_2, column_3, column_4);
    printf("Diagonal sums: %2d %2d\n\n", diag_1, diag_2); 

}


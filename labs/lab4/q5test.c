#include <stdio.h>
 
int main(int argc, char ** argv)
{
    int size=0;
    int matrix[1001][1001], temp_1[1001], temp_2[1001], result_1[1001], result_2[1001];
    int index=0; 
    int index_temp = 1;
    int i, j;
    int check;
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the matrix:\n ");

    for ( int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

     for ( i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            if (matrix[i][j] == 1){
                temp_1[index] = i; // storing the index from the matrix into 1D array
                temp_2[index] = j; 
                index = index + 1;
            }
        }
    }

    temp_1[0] = result_1[0];
    temp_2[0] = result_2[0];
    for (i = 0; i < index; i++){
    check = 0;
        for(j = 0; j < index; j++){
            if (result_1[j] == temp_1[i] || result_2[j] == temp_1[i] || result_2[j] == temp_2[i] || result_1[j] == temp_2[i]){
                check = 1;
            }
        }
        if (check == 0){
            result_1[index_temp] = temp_1[i];
            result_2[index_temp] = temp_2[i];
        }
    }
   

    for (i = 0; i < index_temp; i++){
        printf("%d %d", result_1[i]+1, result_2[i]+1);
    }
 
    return 0;
}
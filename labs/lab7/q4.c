/*
Let a[n][n] (the two-dimensional array) be the adjacency-matrix representation for a graph G = (V, E), 
where V = {0, 1, 2, ..., n-1} is the set of vertices and a[i][j] = 1 if and only if there is an edge between vertices i and j, 
denoted as (i, j) (otherwise a[i][j] = 0). The square of the graph G is the graph H = (V, F) such that H is on the same set V of vertices, 
and there is an edge (i, j) in F if and only if G contains a path of at most two edges between i to j. 
Design a C program to compute the adjacency-matrix for the graph H. (Recall how to read in a graph in Lab #4.) 
Your program prints out the adjacency-matrix for the graph H at the end of computing (in n rows and n columns). 
Declare n to be an unsigned long int in your program.

*/

#include <stdio.h>
 
int main(int argc, char ** argv)
{
    int size=0;
    int matrix[1001][1001];
    int matrix_2[1001][1001];
    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the matrix:\n");

    for ( int a = 0; a < size; a++){
        for (int b = 0; b < size; b++){
            scanf("%d", &matrix[a][b]);
            matrix_2[a][b] = matrix[a][b]; //initialize square matrix using matrix[a][b]
        }
    }


    for ( int a = 0; a < size; a++){        
        for (int b = 0; b < size; b++){
            if (matrix[a][b] == 1){
                for (int c = 0; c < size; c++){
                    if (matrix[b][c] == 1 && a != c){
                        /*
                         eg if 1 is connected to 2. 2 is connected to 1, then 1 is connected to 1. Which is false. 
                         checking for the double edge connection
                         if a and b is connected, and b and c is connected, we know a and c is connected as well while a != c
                         by the law of transitivity
                         */ 
                        matrix_2[a][c] = 1;

                    }
                }
            }
        }
    }

    printf("\n");
    for (int i=0; i<size;++i){
        for(int j=0;j<size;j++){
            printf("%d ", matrix_2[i][j]);

        }
        printf("\n");
    }
    return 0;
}
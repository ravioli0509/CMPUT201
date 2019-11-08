#include<stdio.h>
#define LEN 1000

/*
idea of BFS used from https://en.wikipedia.org/wiki/Breadth-first_search
*/

int main(int argc, char ** argv) {
    int matrix[LEN][LEN];
    int n;
    int queue[LEN]; 
    int visited[LEN];
    int start = 0;
    int check = 0;
    

	printf("\nEnter the number of vertices: ");
	scanf("%d", &n);

	printf("\nEnter graph data in matrix form:\n");
	for( int i=0; i < n; i++) {
		for(int j=0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
    
    for (int j = 0; j < LEN; j++){
        queue[j] = -1;
        visited[j] = -1;  // to ensure that all the values in q are above 0
    }
    queue[check] = start;
    visited[check] = start;  //initializing the position 0 in visited array and queue array
   
    printf("The nodes visited (in order) are: ");

    while (queue[check] != -1){
        start = queue[check];
        check++;
        printf("%d ", start);
        // all the neighbours of start will be matrix[start]
        for(int j = 0; j < n; j++){
            if (matrix[start][j] == 1){ // if there are egdes to the neighbour
                int x = 0;
                for (int a = 0; a < n; a++){
                    if (visited[a] == j){ // visited array validation formation
                        x = 1;
                    }
                }
                if (x == 0){ //wasnt visisted
                    for (int b = 0; b < n; b++){ //neighbours go into queue
                        if (queue[b] == -1){
                            queue[b] = j; 
                            break;
                        }
                    }
                    for (int c = 0; c < n; c++){ // explored nodes go into visisted array
                        if (visited[c] == -1){
                            visited[c] = j;
                            break;
                        }
                    }
                }
                
            }
        } 
    }
    printf("\n");
}
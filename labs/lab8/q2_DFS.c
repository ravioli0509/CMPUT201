#include<stdio.h>
#define LEN 1000

/*
idea of DFS used from https://en.wikipedia.org/wiki/Depth-first_search
*/

int visited[LEN];
int matrix[LEN][LEN]; //globally initialize matrix and an array

int Visiting(int node, int size){
  for (size_t i = 0; i < size; i++) {
    if(visited[i]==node){
        return 1;        // checks if the node is already visited
    }
  }
  return 0;
}

void markVisited(int node){
  for (size_t i = 0; i < LEN; i++) {
    if(visited[i]==-1){
        visited[i]=node;   //if it visits, the node will be stored into an array
        return;
    }
  }
}

void DFS(int node, int size){
  printf("%d ", node);
  for(int i=0; i<size;i++){
    if(matrix[node][i]==1 && Visiting(i,size)==0){  //if its the edge and not visited yet
        markVisited(i); //marks the visisted
        DFS(i,size); // recursively go through the nodes
    }
  }
}

int main(int argc, char ** argv) {
    int n;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter graph data in matrix form:\n");
    for( int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            scanf("%d", &matrix[i][j]); //reads the 2D matrix
        }
    }
    for (size_t i = 0; i < LEN; i++) {
      visited[i]= -1; // to initialize everything with -1 in the visited array
    }
    markVisited(0); // 0 will be marked as a starting point 
    printf("The nodes visited (in order) are: ");
    DFS(0,n);
    printf("\n");

}

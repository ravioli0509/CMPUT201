
#include <stdio.h>
#include <stdlib.h>

void readingraph(int *num, int ***adj) {

	printf("Enter the number of vertices: ");
	scanf("%d", num);

	*adj = (int **)malloc((*num) * sizeof(int *));
	for (int i = 0; i < *num; i++)
		(*adj)[i] = (int *)malloc((*num) * sizeof(int));

	printf("Enter the adj matrix: ");
	for (int i = 0; i < *num; i++)
		for (int j = 0; j < *num; j++)
			scanf("%d", &(*adj)[i][j]);
	
	return;
}

void printgraph(int num, int **adj) { // another way to print, why it works?

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			printf("%d ", adj[i][j]);
		printf("\n");
	}
	
	return;
}

void maxmatching(int num, int **adj, int mm[][2]) {

	printf("\nHave programmed \"maximal matching\" in Lab#4.\n");

	return;
}

void squaregraph(int num, int **adj, int ***square) {

	// Note that we use "at most 2 edges" in the definition:
	*square = (int **)malloc(num * sizeof(int *));
	for (int i = 0; i < num; i++)
		(*square)[i] = (int *)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++) {
			(*square)[i][j] = adj[i][j];
			for (int k = 0; k < num; k++)
				if (adj[i][k] == 1 && adj[k][j] == 1) {
					(*square)[i][j] = 1;
					break;
				}
			// need a statement to make the program correct!
		}
			
	return;
}

int main(int argc, char *argv[]) {

	int num = 0;
	int **adj;

	readingraph(&num, &adj);

	printgraph(num, adj);

	int mm[num/2][2];

	maxmatching(num, adj, mm);

	int **square;
	
	squaregraph(num, adj, &square);

	printf("\nThe square graph is:\n");
	printgraph(num, square);

	return 0;
}
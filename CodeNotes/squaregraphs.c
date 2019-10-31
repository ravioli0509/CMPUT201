#include <stdio.h>
void printgraph(int num, int *adj) { // another way to print, why it works?

	for (int i = 0; i < num * num; i++) {
		printf("%d ", adj[i]);
		if ((i + 1) % num == 0)
			printf("\n");
	}
	
	return;
}

void maxmatching(int num, int adj[][num], int mm[][2]) {

	printf("\nHave programmed \"maximal matching\" in Lab#4.\n");

	return;
}

void squaregraph(int num, int adj[][num], int square[][num]) {

	// Note that we use "at most 2 edges" in the definition:

	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++) {
			square[i][j] = adj[i][j];
			for (int k = 0; k < num; k++)
				if (adj[i][k] == 1 && adj[k][j] == 1) {
					square[i][j] = 1;
					break;
				}
			// need a statement to make the program correct!
		}
			
	return;
}

int main(int argc, char *argv[]) {

	int num = 0;

	printf("Enter the number of vertices: ");
	scanf("%d", &num);
	int adj[num][num];

	printf("Enter the adj matrix: ");
	for (int i = 0; i < num; i++)
		for (int j = 0; j < num; j++)
			scanf("%d", &adj[i][j]);

	printf("\nThe original graph is:\n");
	printgraph(num, adj[0]);

	int mm[num/2][2];

	maxmatching(num, adj, mm);

	int square[num][num];
	
	squaregraph(num, adj, square);

	printf("\nThe square graph is:\n");
	printgraph(num, square[0]);

	return 0;
}
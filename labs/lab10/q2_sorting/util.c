
#include "util.h"

int readinarray(int **a) {
	int n;
	
	printf("Enter the number of integers to be sorted: ");
	scanf("%d", &n);

	*a = (int *)malloc(n * sizeof(int));
	if (*a == NULL) exit(-1);
	
	printf("\nEnter %d integers to be sorted: ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &(*a)[i]);
	
	return n;
}

void print_array(int a[], int n) {
	
	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	return;
}


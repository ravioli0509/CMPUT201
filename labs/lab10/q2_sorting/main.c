
#include "main.h"

int main(int argc, char *argv) {

	int n, *array;

	n = readinarray(&array);
	
	insertionsort(array, 0, n - 1);

	printf("\nInsertionsort: in sorted non-decreasing order (length = %d): ", n);
	print_array(array, n);

	free(array);

	return 0;
}

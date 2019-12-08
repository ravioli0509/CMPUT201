#include <stdio.h>
#include "quicksort.h"

#define N 10

int main(void)
{
    int a[N], n, i, j;
    int compare = 0;

    printf("How many sets of integers would you like to sort? ");
    scanf("%d", &n);


    printf("Enter %d numbers to be sorted: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);

    printf("In sorted order: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("The total number of comparisons made is %d\n", compare);

}



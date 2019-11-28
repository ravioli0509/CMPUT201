#include <stdio.h>
/*
Program not done. Counters are done. What I was trying to do was to rearrange the array the in a way the median number will come in
the front of the array. And the first quartile of the array comes next and the third quartile comes first in the second half of the sequence.
1 2 3 4 5 6 7 ( 4 is the median. 2 is Median of the first half and 6 is the median of the second half.)
rearranged array is 4 2 1 3 6 5 7. Which should give 11 comparisons. 

*/
int compare = 0;

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    int n, i, j;

    printf("How many sets of integers would you like to sort? ");
    scanf("%d", &n);

    int a[n];

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

    int temp;
    int new[i];
    int s = sizeof(a) / sizeof(int);
    temp = a[s/2];
    a[0] = temp;
         
    printf("%d\n", new[0]);

    for (j = 0; j < n/2; j++){
        new[j+1] = a[j];
    }
    
    for (j = 0; j <= n; j++){
        printf("%d ", a[j]);
    }


    printf("\nThe best rearranged integers are: ");
    for (j = 0; j < n; j++){
        printf("%d ", a[j]);
    }

    printf("\n");
    printf("The minimum number of comparisons made is %d\n", compare);
}

void quicksort(int a[], int low, int high){
    int middle;
    if (low >= high){
        return;
    }
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high){
    int element = a[low];

    for (;;){
        while ((low < high) && element <= a[high]){
            high--;
            compare++;
        }
        if (low < high){
            compare++; // counts for the comparison between element is getting swapped
        }
        if (low >= high){
            break;
        }
        a[low++] = a[high];

        while ((low < high) && a[low] <= element){
            compare++;
            low++;
        }
        if (low < high){
            compare++; // counts for the comparison between element is getting swapped 
        }
        if (low >= high){
            break;
        }
        a[high--] = a[low];
    }
    a[high] = element;
    return high;
}


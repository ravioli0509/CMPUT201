#include <stdio.h>
/*
 * 3. Rearrange the input array of integers into the other array such that the quicksort does as few as possible comparisons. 
 * 4. Your program needs to print out this rearranged array and the associated number of comparisons, 
 *    using printf("The best rearranged %d integers are: ...); printf("The minimum number of comparisons made is %d ...);.
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
    return 0;

    printf("The best rearranged integers are: ");
    for (j = 0; j < n; j++){
        printf("%d ", a[j]);
    }
    printf("\n");
    printf("The minimum number of comparisons made is %d ", compare);

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


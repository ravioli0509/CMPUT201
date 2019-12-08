#include <stdio.h>
#include "quicksort.h"

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
        #ifdef COUNT
            compare++;
        #endif
        }
        #ifdef COUNT
        if (low < high){
            compare++; // counts for the comparison between element is getting swapped
        }
        #endif
        if (low >= high){
            break;
        }
        a[low++] = a[high];

        while ((low < high) && a[low] <= element){
            low++;
        #ifdef COUNT
            compare++;
        #endif
        }
        #ifdef COUNT
        if (low < high){
            compare++;  // counts for the comparison between element is getting swapped
        }
        #endif  

        if (low >= high){
            break;
        }
        a[high--] = a[low];
    }
    a[high] = element;
    return high;
}


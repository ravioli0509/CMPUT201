// A has at least size elements 
// post-condition: A[0] <= A[1] <= .. <= A[size-1]
void sort(int A[], int size)
{
    for (int s1=size; s1 > 1; --s1){
        // swap max. element in A[0..s1-1] with A[s1-1]
        swap(A[indexOfMax(A,s1)], A[s1-1]);
    }
}

int A[5] = { 5, 4, 3, 2, 1 };
sort(A, 5);
// A now 1 2 3 4 5


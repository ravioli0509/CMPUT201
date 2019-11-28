void add_half_of_middle_to_all(int* data, const size_t count)
{
    sizeof half_count = count/2;
    int x = data[half_count] / 2;
    int i;
    for (i = 0; i < half_count; i++) // first half
        data[i] += x;
    // ... skip middle element
    for (i++; i < count; i++) // second half
        data[i] += x;
}


int main(void)
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7 };
    int b[] = { 2, 4, 6, 8, 10 };
    int i;

    add_half_of_middle(a, 7);
    add_half_of_middle(b, 5);

    printf("a: ");
    for (i = 0; i < 7; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("b: ");
        for (i = 0; i < 5; i++)
    printf("%d ", b[i]);
    printf("\n");
}
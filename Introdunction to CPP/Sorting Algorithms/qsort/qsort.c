#include <stdio.h>
#include <stdlib.h> // for qsort

// Comparison function for qsort
int compare(const void *a, const void *b)
{

    const int *a1 = a;
    const int *b1 = b;

    return *a1 - *b1;

    // to sort in accending order 1 2 3 4 5

    // to sort in decending order return *b1 - *a1  5 4 3 2 1
}

// int compare(const void *a, const void *b)
// {
//     const int *a1 = a;
//     const int *b1 = b;

//     return *a1 - *b1;
// }

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using qsort
    qsort(arr, n, sizeof(int), compare);

    // syntax(name , size , size of datatype,func_name);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

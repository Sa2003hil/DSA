#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int n)
{
    int low = 0;      // Initialize low to 0
    int high = n - 1; // Initialize high to the last index

    while (low < high)
    {
        swap(&arr[low], &arr[high]);
        low++;
        high--;
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Removed the '&' before arr[i]
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; i++)
    {
        reverse(arr, n);
    }

    printarr(arr, n);

    return 0;
}

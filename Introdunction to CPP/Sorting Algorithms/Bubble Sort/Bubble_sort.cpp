/*
Time complexity of O(N2) || space complexity ---> O(1), because it doesn't require any extra space.

Worst case-->O(N2), Total number of swaps = Total number of comparison


*/

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    int i, j;
    bool swapped = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // if already sorted
            break;
        }
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubblesort(arr, n);
    printarr(arr, n);

    return 0;
}

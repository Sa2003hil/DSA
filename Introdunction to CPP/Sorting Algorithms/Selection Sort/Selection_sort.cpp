// Space complexity -->  O(n)
// Time complexity --> O(n^2)  (Best case & worst case)

#include <iostream>
using namespace std;

int inptarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Select minimum and swap
int selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    int arr[n];

    inptarr(arr, n);

    selectionsort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

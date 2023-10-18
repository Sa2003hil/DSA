#include <bits/stdc++.h>
using namespace std;

int reverse(int start, int end, int arr[], int n)
{
    if (start >= end)
    {
        return 0;
    }
    else
    {
        swap(arr[start], arr[end]);
        return reverse(start + 1, end - 1, arr, n) + 1;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reverse the array and get the number of elements reversed.
    int res = reverse(0, n - 1, arr, n);

    // Print the number of elements reversed.
    cout << res << endl;

    return 0;
}
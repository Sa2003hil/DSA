#include <bits/stdc++.h>
using namespace std;

void reverse(int start, int end, int arr[])
{
    if (start >= end)
    {
        return;
    }
    else
    {
        swap(arr[start], arr[end]);
        reverse(start + 1, end - 1, arr);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse(0, n - 1, arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

/*
Optimised Method by using single pointer to swap the numbers in an array

void reverse(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    else
    {
        swap(arr[i], arr[n - i - 1]);
        reverse(i + 1, arr, n);
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

    reverse(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

*/
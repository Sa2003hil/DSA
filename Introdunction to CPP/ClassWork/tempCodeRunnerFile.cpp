#include <bits/stdc++.h>
using namespace std;

void LeftRotateArr(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

void RightRotateArr(int arr[], int n, int d)
{
    reverse(arr, arr + d - 1);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main(int argc, char const *argv[])
{
    /* code */
    int n, d;
    cin >> n >> d;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // LeftRotateArr(arr, n, d);
    RightRotateArr(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

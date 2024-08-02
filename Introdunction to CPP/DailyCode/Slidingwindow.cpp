#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int max_sum = INT_MIN;
    int current_sum = INT_MIN;
    int n, k;
    cout << n << k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= k; i++)
    {
        max_sum += arr[i];
        current_sum = max_sum;
    }

    return 0;
}

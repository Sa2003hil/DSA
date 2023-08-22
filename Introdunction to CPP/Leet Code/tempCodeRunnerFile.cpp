#include <iostream>
using namespace std;

void prefixsum(int arr[], int n)
{
    int sum1 = 0, sum2 = 0, totalsum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 += arr[i];
        sum2 = 0;                            // Reset sum2 for each i
        for (int j = n - i + 1; j >= 1; j--) // Fix the loop condition
        {
            sum2 += arr[j];
        }

        totalsum = sum1 + sum2;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        prefixsum(arr, n);
    }
    return 0;
}

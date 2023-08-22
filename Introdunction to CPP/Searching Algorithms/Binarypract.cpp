#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // creating a vector of array
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int to_find;
    cin >> to_find;

    int low = 0;
    int high = n - 1;

    int mid;

    while (high - low > 1)
    {
        mid = low + (high - low) / 2; // Calculate mid index

        if (arr[mid] < to_find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    if (arr[low] == to_find)
    {
        cout << low + 1 << endl;
    }
    else if (arr[high] == to_find)
    {
        cout << high + 1  << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}

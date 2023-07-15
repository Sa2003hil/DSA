//  Maximum and Minimum element in the array

#include <iostream>
#include <limits.h>
using namespace std;

getmax(int arr[], int n)
{

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); // Shortcut Method

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

getmin(int arr[], int n)
{
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = max(mini, arr[i]); // Shortcut Method

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int main(int argc, char const *argv[])
{
    int max = -1;
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "max element is : " << getmax(arr, n) << endl;
    cout << "min element is : " << getmin(arr, n) << endl;

    return 0;
}

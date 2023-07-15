#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) 
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }

    return s;
}

int main()
{
    int n;
    cin >> n;

    // int *arr = new int[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pivotElement = getPivot(arr, n);
    cout << "Pivot Element is index no : " << pivotElement << endl;

    // delete[] arr;
    return 0;
}

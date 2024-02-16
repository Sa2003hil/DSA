#include <bits/stdc++.h>
using namespace std;

// Learn this using cards technique like sorting cards in hand and then placing them in the right position

void insertionSort(int n, vector<int> &arr)
{
    // Write your code here.
    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        // compare with i-1 to 0th element to search where to put this
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        // this is for placing the values at there acctual position
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

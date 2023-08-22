// C++ code to linearly search x in arr[].

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x;
    cout << "Enter the key to be searched: " << endl;
    cin >> x;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, N, x);
    if (result == -1)
        ? cout << "Element is not present in array" // Ternary Operators
        : cout << "Element is present at index " << result;
    return 0;
}

// Time Complexities

// 1.Best Case:
// In the best case, the key might be present at the first index. So the best case complexity is O(1)
// 2.Worst Case:
// In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
// 3.Average Case:
//  O(N)